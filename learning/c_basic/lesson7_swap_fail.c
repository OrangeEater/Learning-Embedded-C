#include <stdio.h>

// 这是一个错误的交换函数
void swap_fail(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("函数内部: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 5, b = 10;
    swap_fail(a, b);
    printf("回到 main: a = %d, b = %d\n", a, b);
    return 0;
}