#include "student.h"
#include <stdio.h>
#include <string.h>
void printBestStudent(struct student arr[],int len){
    int index=0;
    for(int i=1;i<len;i++){
        if(arr[index].score<arr[i].score){
            index=i;
        }
    }
    printf("最好的学生是：%s,分数为:%d\n",arr[index].name,arr[index].score);
}

void  init_student(struct student arr[]){
    struct student *p=arr;
    strcpy(arr[0].name,"device");
    strcpy(arr[1].name,"niko");
    strcpy(arr[2].name,"donk");
    p->score=90;
    (p+1)->score=95;
    (p+2)->score=100;
}
