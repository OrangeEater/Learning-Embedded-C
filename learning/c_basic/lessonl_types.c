#include <stdio.h>

int main() {
    int a = 10;
    char c = 'A';
    float f = 3.14f;
    double d = 3.1415926; // 这里改成了小数点

    printf("Values: int=%d, char=%c, float=%f, double=%lf\n", a, c, f, d);
    printf("--- Memory Size (Bytes) ---\n");
    
    // 注意 sizeof 的拼写
    printf("Size of char: %lu byte\n", sizeof(char)); 
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));

    return 0; // 建议加上这一行，代表程序正常结束
}