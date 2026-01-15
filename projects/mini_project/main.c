#include "sensor.h"
#include "student.h"

int main(){
    struct sensor my_s;
    init_sensor(&my_s,101,26.5);
    print_sensor(&my_s);

    struct student my_st[3];
    init_student(my_st);
    printBestStudent(my_st,3);

    return 0;
}