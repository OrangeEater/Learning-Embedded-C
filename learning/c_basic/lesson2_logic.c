#include <stdio.h>
int main(){
    int score;
    printf("请输入您的考试分数（0-100）");
    scanf("%ds",&score);
    if(score>=90){
        printf("你很优秀！\n");
    }else if(score>60){
        printf("还得练");
    }else{
        printf("不及格，回家吧。");
    }
    return 0;
}