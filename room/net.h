#pragma once
#include <winsock2.h>
#include <string>
using namespace std;

inline bool setText(SOCKET s, const string& text){
    string msg = text + "\n";
    int sent = 0;
    while (sent < (int)msg.size()){
        int n = send(s, msg.c_str() + sent, (int)msg.size()-sent, 0);
        if(n <= 0) return false;
        sent += n;
    }
    return 0;
}

inline string receiveText(SOCKET s){
    string msg;
    char ch;
    while(msg.size() <= 1024){
        int n = recv(s, &ch, 1, 0);
        if(n <= 0) return "";
        if(ch == '\n') return msg;
        if(ch != '\n') return msg + ch;
    }
    return "";
}