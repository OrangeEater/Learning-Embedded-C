#include <stab.h>
int main(){
    int temp;
    printf("请输入温度：(摄氏度)");
    scanf("%d",&temp);
    if(temp>30){
        printf("温度过高，开启空调。");
    }else if(temp>10){
        printf("温度舒适。");
    }else{
        printf("温度过低开启暖气。");
    }
    return 0;
}