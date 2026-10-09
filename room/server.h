#pragma once
#include "Net.h"
#include <ws2tcpip.h>
#include <iostream>

class Server{
    SOCKET serverSocket = INVALID_SOCKET;
    SOCKET players[2] = {INVALID_SOCKET, INVALID_SOCKET};
    string names[2];
    bool winsockStartrd = false;

    public:
    void showServerIP(int port){
        char hostname[256]{};
        addrinfo hints{}, *result = nullptr;
        cout << "\n== CPP ROYAL SERVER ==\n";
        cout << "Port : " << port << '\n';
        if(gethostname(hostname, sizeof(hostname)) != 0){
            cout << "Cannot get IP\n";
            return;
        }
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_STREAM;
        if(getaddrinfo(hostname, nullptr, &hints, &result) != 0){
            cout << "Cannot find LAN IP\n";
            return;
        }
        bool found = false;
        for(auto p = result; p; p = p->ai_next){
            auto addr = (sockaddr_in*)p->ai_addr;
            unsigned long ip = ntohl(addr->sin_addr.s_addr);
            if((ip >> 24)==127) continue;
            char text [INET_ADDRSTRLEN]{};
            inet_ntop(AF_INET, &addr->sin_addr, text, sizeof(text));
            cout << "Join IP : " << text << '\n';
            found = true;
        }
        freeaddrinfo(result);
        if(!found) cout << "LAN IP not found\n";
        cout << "================\n";
    }
    bool start(int port = 54000){
        WSADATA wsa;
        if(WSAStartup(MAKEWORD(2, 2),&wsa)!= 0) return false;
        winsockStartrd = true;
        serverSocket = socket(AF_INET, SOCK_STREAM, 0);
        if(serverSocket == INVALID_SOCKET) return false;
        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = INADDR_ANY;
        if(bind(serverSocket, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR)
        return false;
        if(listen(serverSocket, 2)== SOCKET_ERROR) return false;
        cout << "Server listening on port " << port << "\n";
        return true;
    }
    bool waitPlayers(){
        for(int i = 0; i < 2; i++){
            cout << "Waiting for player" << i + 1 << "...\n";
            players[i] = accept(serverSocket, nullptr, nullptr);
            if(players[i] == INVALID_SOCKET) return false;
            names[i] = receiveText(players[i]);
            if(names[i].empty()){
                cout << "Invalid player name or disconnected.\n";
                return false;
            }
            cout << names[i] << "joined the party!\n";
            setText(players[i], "JOINED : " +names[i]);
            if(i == 0) setText(players[i], "Waiting for Players");
        
            string party = "PARTY : " +names[0]
                               + ", " +names[1];
            for(int i = 0; i < 2; i++){
                setText(players[i], "Plater joined : " +names[1]);
                setText(players[i], "Party Ready");
                setText(players[i], party);
            }
            cout << "== PArty Ready ==\n";
            cout << "[1] " << names[0] << '\n';
            cout << "[2] " << names[1] << '\n';
            cout << "Waiting for Battle..\n";
            return true;
        }
    }
        void stop(){
            for(auto& p : players){
                shutdown(p, SD_BOTH);
                closesocket(p);
                p = INVALID_SOCKET;
            }
            if(serverSocket != INVALID_SOCKET){
                closesocket(serverSocket);
                serverSocket = INVALID_SOCKET;
            }
            if(winsockStartrd){
                WSACleanup();
                winsockStartrd = false;
            }
        }
        ~Server(){ stop(); }
};