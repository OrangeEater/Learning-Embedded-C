#include <stdio.h>


int count(int n){
    int count=0;
    while(n!=0){
        count++;
        n&=(n-1);
    }

    return count;
}
int main(){
    int n;
    printf("输入数字：\n");
    scanf("%d",&n);
    printf("%d",count(n));

}