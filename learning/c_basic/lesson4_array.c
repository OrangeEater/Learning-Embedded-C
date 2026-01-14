#include <stdio.h>
int main(){
    float temp[5];
    float sum=0;
    float max,min;
    printf("请输入5此传感器采集的温度： \n");
    for(int i=0;i<5;i++){
        printf("第%d次采集：",i+1);
        scanf("%f",&temp[i]);
    }
    max=temp[0];
    min=temp[0];
    for(int i=0;i<5;i++){
        sum+=temp[i];
        if(max<temp[i]){
            max=temp[i];
        }
        if(min>temp[i]){
            min=temp[i];
        }
    }
    printf("平均温度为%2f\n",sum/5);
    printf("最大温度是：%2f,最小温度是：%2f.",max,min);
    return 0;
}