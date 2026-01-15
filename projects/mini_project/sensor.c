#include <stdio.h>
#include "sensor.h"

void init_sensor(struct sensor *s,int id,float temp){
    s->id=id;
    s->temp=temp;
}

void print_sensor(struct sensor *s){
    printf("Sensor ID:%d,Temp:%.2f\n",s->id,s->temp);
}