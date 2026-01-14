#include <stdio.h>
int main(){
    int battery;
    printf("请输入当前电量：\n");
    scanf("%d",&battery);
    while(battery<100){
        battery+=5;
        printf("正在充电...当前电量：%d",battery);
    }
    printf("电池已充满！自动切断电源。");
    return 0;
}