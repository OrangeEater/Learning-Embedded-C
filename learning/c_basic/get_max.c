#include <stdio.h>
float get_max(float array[],int len){
    float max=array[0];
    for(int i=0;i<len;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    return max;
}

int main() {
    float my_temps[5] = {20.5, 30.1, 15.2, 25.4, 10.8};
    float max_val = get_max(my_temps, 5); // 调用函数
    printf("最大值是: %.1f\n", max_val);
    return 0;
}