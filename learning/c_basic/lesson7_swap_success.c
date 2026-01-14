#include <stdio.h>

// 这里的参数是 int* 类型，表示“我要接收两个地址”
void swap_ok(int *p1, int *p2) {
    int temp = *p1; // 把 p1 指向的那个房子的内容（a的值）存到 temp
    *p1 = *p2;      // 把 p2 指向的内容 搬到 p1 指向的房子里
    *p2 = temp;     // 把 temp 里的内容 搬到 p2 指向的房子里
}

int main() {
    int a = 5, b = 10;
    
    // 注意：这里传的是 &a 和 &b（地址）
    swap_ok(&a, &b);

    printf("交换后的结果: a = %d, b = %d\n", a, b);
    return 0;
}