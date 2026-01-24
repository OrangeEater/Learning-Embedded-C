#include <stdio.h>

// 结构体 A
struct A {
    char a;   // 1字节
    int b;    // 4字节
    char c;   // 1字节
};

// 结构体 B (只是换了下顺序)
struct B {
    int b;    // 4字节
    char a;   // 1字节
    char c;   // 1字节
};

int main() {
    printf("结构体 A 的大小: %lu 字节\n", sizeof(struct A));
    printf("结构体 B 的大小: %lu 字节\n", sizeof(struct B));

    return 0;
}