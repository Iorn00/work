#include "server.h"
#include "client.h"
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[]){
    bool isServer = false;
    int port = 54000;

    for(int i=1; i < argc; i++){
        string arg = argv[i];
        if(arg == "-s") isServer = true;
        else if(arg == "-p" && i+1 < argc)
        port = atoi(argv[++i]);
    }
    if(isServer){
        Server server;
        if(!server.start(port)){
            cout << "Server failed\n";
            return 1;
        }
        server.showServerIP(port);
        if(server.waitPlayers()) cout << "Party read!\n";
        cout << "Press Enter to stop server..\n";
        cin.get();
        server.stop();
        return 0;
    }
    string ip = "127.0.0.1", line;
    ifstream file("net.cfg");
    if(!file){
        ofstream out("net.ctg");
        cout << "ip = 127.0.0.1\n port = 5400n";
        cout << "Create net.cfg\n";
    }else{
        while(getline(file, line)){
            if(line.find("ip = ")==0) ip = line.substr(3);
            else if(line.find("port = ")==0)
                    port = atoi(line.substr(5).c_str());
        }
    }
    string name;
    cout << "Enter your hero name : ";
    getline(cin >> ws, name);
    Client client;
    if(client.connectServer(ip, port)){
        cout << "Connection failed : " << ip << " : " << port << '\n';
        return 1;
    }
    client.join(name);
    client.close();
    return 0;
}