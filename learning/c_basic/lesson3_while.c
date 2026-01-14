#include<stdio.h>
int main(){
    int count=5;
    printf("准备发射。。。\n");
    while(count>0){
        printf("%d..\n",count--);
    }
    printf("Boom!");
    return 0;
}