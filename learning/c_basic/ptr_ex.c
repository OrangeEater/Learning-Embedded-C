#include <stdio.h>
void get_sum_and_avg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=*sum/2;
}

int main(){
    int x=10,y=20;
    int sum;
    float avg;
    get_sum_and_avg(x,y,&sum,&avg);
    printf("和为：%d,平均值为：%.2f",sum,avg);
    return 0;


}