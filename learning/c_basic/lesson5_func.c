#include <stdio.h>
int add(int x,int y){
    return x+y;
}

int main(){
    int a=5,b=10;
    int res=add(a,b);
    printf("%d +%d=%d",a,b,res);
    return 0;
}