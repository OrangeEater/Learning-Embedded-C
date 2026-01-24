#include <stdio.h>

int main() {
    unsigned int x = 0x12345678;
    // 用一个 char 指针指向这个 int 的开头
    // 因为 char 只有 1 字节，它只能看到第一个格子的内容
    unsigned char *p = (unsigned char *)&x;

    printf("x 的完整数值: 0x%x\n", x);
    printf("内存起始地址 %p 处存放的字节是: 0x%x\n", p, *p);

    if (*p == 0x78) {
        printf("结果：低位 0x78 在低地址，你的机器是【小端】。\n");
    } else {
        printf("结果：高位 0x12 在低地址，你的机器是【大端】。\n");
    }

    return 0;
}