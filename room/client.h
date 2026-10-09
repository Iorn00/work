#pragma once
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include "Net.h"

class Client{
    SOCKET sock = INVALID_SOCKET;
    bool winsockStarted = false;

    public:
    bool connectServer(const string& ip, int port){
        WSADATA wsa;
        if(WSAStartup(MAKEWORD(2,2),&wsa)!= 0) return false;
        winsockStarted = true;

        sock = socket(AF_INET, SOCK_STREAM, 0);
        if(sock == INVALID_SOCKET) return false;
        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        if(inet_pton(AF_INET, ip.c_str(), &addr.sin_addr)!= 1) return false;
        if(connect(sock, (sockaddr*) &addr, sizeof(addr) == SOCKET_ERROR)) return false;
        cout << "Connected to server\n";
        return true;
    }

    void join(const string& name){
        if(!setText(sock, name)) return;
        while (true){
            string msg = receiveText(sock);
            if(msg.empty()){
                cout << "Disconnected from Sever\n";
                return;
            }
            if(msg == "PARTY_READY") cout << "\n== PARTY READY ==";
            else if(msg.find("PARTY : ") ==0 ) cout << msg << "\n";
            else if(msg == "WAITING_FOR_PLAYERS")
                    cout << "waiting for anuthor player..\n";
            else if(msg.find("JOINED : ") ==0 )     
                    cout << msg << "\n";   
            else if(msg.find("PLAYER_JOINED : ") ==0 )     
                    cout << msg.substr(15) << " joined\n";   
        }
    }

void close(){
    if(sock != INVALID_SOCKET){
        closesocket(sock);
        sock = INVALID_SOCKET;
    }
    if(winsockStarted){
        WSACleanup();
        winsockStarted = false;
    }
}
    ~Client() { close();}
};
