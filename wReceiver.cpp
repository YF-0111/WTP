#include "UDPSocket.h"
#include <iostream>
//packet* pks[windowsize]
//while not end:
//    recv packet
//    if is_wanted
//    update and send ac
//    if timeout
//    send acl

//basic part: socket timeout
//bonus part: std::async?

using namespace std;
int main(){
    UDPSocket receiver;
    receiver.bind_me(8888);
    cout<<"Start receicing\n";
    while(true)
    {
        printf("Waiting for data on port %d ...", 8888);
        fflush(stdout);

        //try to receive some data, this is a blocking call
        char buffer[256]={0};

        receiver.receive(buffer,256);
        cout<<"Data:"<<buffer;
        cout<<"\nSending the data back\n";
        receiver.send(buffer);
    }
    return 0;
}