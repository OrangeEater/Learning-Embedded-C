#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>

int main(){
    int server_fd=socket(AF_INET,SOCK_STREAM,0);
    if(server_fd==-1){
        std::cerr<<"创建失败"<<std::endl;
        return -1;
    }

    struct sockaddr_in address;
    address.sin_family=AF_INET;
    address.sin_addr.s_addr=INADDR_ANY;
    address.sin_port=htons(8080);

    if(bind(server_fd,(struct sockaddr *)&address,sizeof(address))<0){
        std::cerr<<"绑定失败"<<std::endl;
        return -1;
    }

    std::cout<<"服务器已启动，正在监听8080端口。。。"<<std::endl;
    listen(server_fd,3);
    close(server_fd);
    return 0;

}