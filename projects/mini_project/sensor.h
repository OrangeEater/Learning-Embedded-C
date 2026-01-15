#ifndef _SENSOR_H_
#define _SENSOR_H_

struct sensor
{
    int id;
    float temp;
};

void init_sensor(struct sensor *s,int id,float temp);
void print_sensor(struct sensor *s);


#endif
