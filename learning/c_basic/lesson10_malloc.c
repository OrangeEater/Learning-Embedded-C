#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("请输入你需要的存储的温度的个数：");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("内存申请失败：\n");
        return 1;
    }

    for(int i=0;i<n;i++){
        arr[i]=i*10;
        printf("数据[%d]=%d\n",i,arr[i]);
    }


    free(arr);
    arr=NULL;
    printf("内存已释放。\n");

    int *p=(int*)malloc(3*sizeof(int));

    if(p==NULL){
        printf("内存申请失败\n");
        return 1;
    }

    for(int i=0;i<3;i++){
        p[i]=i*2;
        printf("数据p[%d]=%d\n",i,p[i]);
    }

    int *temp=(int*)realloc(p,5*sizeof(int));
    if(temp!=NULL){
        p=temp;
    }

    for(int i=0;i<5;i++){
        p[i]=i*2;
        printf("数据p[%d]=%d\n",i,p[i]);
    }

    free(p);


    return  0;
}