#include <stdio.h>
#include <string.h>

struct sensor
{
    int id;
    float temp;
    char name[20];
};

struct student{
    char name[20];
    int score;
} ;


struct test{
    char a;
    int b;
} t;

void printBestStudent(struct student arr[],int len){
    int index=0;
    for(int i=1;i<len;i++){
        if(arr[index].score<arr[i].score){
            index=i;
        }
    }
    printf("最好的学生是：%s,分数为:%d\n",arr[index].name,arr[index].score);
}



int main(){
    struct sensor s1;
    s1.id=101;
    s1.temp=25.6;
    strcpy(s1.name,"DHT11_Room1");
    printf("传感器%s(ID:%d)的当前温度是:%.1f\n",s1.name,s1.id,s1.temp);

    struct sensor *ptr=&s1;
    ptr->temp=28;//采用指针的方式修改结构体内的参数，更专业
    printf("借助指针修改后的温度为：%.1f\n",s1.temp);

    printf("-------------------------------\n");
    struct student st[3];
    struct student *p=st;
    strcpy(st[0].name,"device");
    strcpy(st[1].name,"niko");
    strcpy(st[2].name,"donk");
    p->score=90;
    (p+1)->score=95;
    (p+2)->score=100;

    printBestStudent(st,3);


    printf("%lu\n",sizeof(t));

    return 0;
}
