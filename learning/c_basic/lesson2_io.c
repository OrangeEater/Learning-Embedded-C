#include <stdio.h>
int  main(){
    int age;
    float weight;
    printf("请输入您的年龄：");
    scanf("%d",&age);
    printf("请输入您的体重：");
    scanf("%f",&weight);
    printf("您的年龄是%d岁,体重是%2f kg.",age,weight);
    return 0;
}