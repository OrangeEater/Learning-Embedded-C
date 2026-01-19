#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createNode(int val){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("内存申请失败");
    }
    ptr->data=val;
    ptr->next=NULL;

    return ptr;
}

int main(){
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL){
        printf("申请内存失败\n");
        return 1;
    }
    head->data=10;
    head->next=NULL;


    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
        if(second==NULL){
        printf("申请内存失败\n");
        return 1;
    }
    second->data=20;
    second->next=NULL;

    head->next=second;

    struct Node *current=head;

    while(current!=NULL){
        printf("节点数据：%d\n",current->data);
        current=current->next;
    }


    free(second);
    free(head);

    printf("------------------------");

    int n;
    struct Node *node_1=createNode(1);
    struct Node *node_2=createNode(2);
    struct Node *node_3=createNode(3);
    struct Node *temp=node_1;
    node_1->next=node_2;
    node_2->next=node_3;
    for(int i=0;i<3;i++){
        printf("第%d个节点数值为%d\n",i,temp->data);
        temp=temp->next;
    }
    struct Node *next_node;
    temp=node_1;

    for(int i=0;i<3;i++){
        next_node=temp->next;
        free(temp);
        temp=next_node;
    }

    struct Node *head_new=createNode(0);
    struct Node *current_new=head_new;
    for(int i=1;i<5;i++){
        temp=createNode(i);
        current_new->next=temp;
        current_new=temp;
    }

    current=head_new;

    for(int i=0;i<5;i++){
        temp=current->next;
        free(current);
        current=temp;
    }


    return 0;
}