#ifndef _STUDENT_H_
#define _STUDENT_H_


struct student{
    char name[20];
    int score;
} ;


void init_student(struct student arr[]);

void printBestStudent(struct student arr[],int len);



#endif
