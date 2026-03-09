#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <cstring>

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
    std::cout<<"等待客户端连接。。。"<<std::endl;
    int addrlen=sizeof(address);
    int new_socket=accept(server_fd,(struct sockaddr *)&address,(socklen_t*)&addrlen);

    if(new_socket<0){
        perror("接听失败");
        return -1;
    }

    std::cout<<"连接成功正在接受数据。。。"<<std::endl;
    char buffer[1024]={0};
    read(new_socket,buffer,1024);
    std::cout<<"收到客户端消息："<<buffer<<std::endl;
    const char *hello="HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello World!";
    send(new_socket,hello,strlen(hello),0);
    close(new_socket);
    close(server_fd);
    return 0;

}