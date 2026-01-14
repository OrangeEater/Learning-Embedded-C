#include <stdio.h>

int main() {
    // 必须定义成数组
    int a[5] = {10, 20, 30, 40, 50}; 
    
    // 标准写法
    printf("a[1] 是: %d\n", a[1]);
    
    // “骚操作”写法
    // 逻辑：1[a] -> *(1 + a) -> *(a + 1) -> a[1]
    printf("1[a] 居然也是: %d\n", 2[a]); 

    return 0;
}