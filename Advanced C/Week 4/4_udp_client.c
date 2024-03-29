#include<netinet/in.h>
#define PORT 5000
#define MAXLINE 1000

int main(){
        char buffer[100];
        char* message="Hello server";
        int sockfd,n;
        struct sockaddr_in servaddr;

        bzero(&servaddr, sizeof(servaddr));
        servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
        servaddr.sin_port=htons(PORT);
        servaddr.sin_family=AF_INET;

        sockfd=socket(AF_INET,SOCK_DGRAM,0);

        if(connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0){
                printf("Error: connect failed\n");
                exit(0);
        }
        sendto(sockfd,message,MAXLINE,0,(struct sockaddr*)NULL,sizeof(servaddr));

        recvfrom(sockfd,buffer,sizeof(buffer),0,(struct sockaddr*)NULL,NULL);
        puts(buffer);
        close(sockfd);
}