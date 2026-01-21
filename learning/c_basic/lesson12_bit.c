#include <stdio.h>
void printf_binary(unsigned char n){
    for(int i=7;i>=0;i--){
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}


int main(){
    unsigned char reg=0x00;
    printf("初始状态：");
    printf_binary(reg);


    reg|=(1<<3);
    printf("第3位置1：");
    printf_binary(reg);

    reg&=~(1<<3);
    printf("第3位清零：");
    printf_binary(reg);

    reg^=(1<<0);
    printf("第0为翻转：");
    printf_binary(reg);

    int a=5,b=10;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("交换后：a=%d,b=%d\n",a,b);

    return 0;

}