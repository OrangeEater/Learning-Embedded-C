#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
struct Stack{
    int data[MAX_SIZE];
    int top;
};

void init(struct Stack *s){
    s->top=-1;
}

int push(struct Stack *s,int val){
    if(s->top>=MAX_SIZE-1){
        printf("栈满，溢出了\n");
        return -1;
    }
    s->data[++(s->top)]=val;
    return 0;
}


int pop(struct Stack *s){
    if(s->top==-1){
        printf("栈空，没东西了\n");
        return -1;
    }

    return s->data[(s->top)--];
}


void con(int num){
if(num==0){
    printf("0");
    return;
}

    struct Stack nums;

    init(&nums);
    while(num!=0){
        push(&nums,num%2);
        num/=2;
    }
    while(nums.top!=-1){
        printf("%d",pop(&nums));
    }

    printf("\n");

}


int main(){
    struct Stack my_stack;
    init(&my_stack);
    push(&my_stack,10);
    push(&my_stack,20);
    push(&my_stack,30);

    printf("弹出一个数%d\n",pop(&my_stack));
    printf("弹出一个数%d\n",pop(&my_stack));


    con(2);

    con(4);


    return 0;
}
