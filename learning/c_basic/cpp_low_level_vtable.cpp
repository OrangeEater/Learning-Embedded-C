#include <iostream>
using namespace std;

class Base {
    int a;
public:
    virtual void func() {} // 只要有了这个 virtual
};

class Base2 {
    int a;
    // 没有虚函数
};

int main() {
    // 在 64 位机器上，指针占 8 字节，int 占 4 字节
    cout << "带虚函数的类大小: " << sizeof(Base) << endl;  // 结果可能是 16 (8字节指针 + 4字节int + 4字节补齐)
    cout << "不带虚函数的类大小: " << sizeof(Base2) << endl; // 结果是 4
    return 0;
}