#include <iostream>
#include <stack>
#include <vector>

using namespace std;
class Conventer{
    public:
    void decimalToBinary(int num){
        if(num==0){
            cout<<'0'<<endl;
            return;
        }
        stack<int> s;
        while(num>0){
            s.push(num%2);
            num/=2;
        }

        cout<<"二进制结果：";
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"请输入一个十进制数";
    cin>>n;
    Conventer myConv;
    myConv.decimalToBinary(n);
    return 0;
}