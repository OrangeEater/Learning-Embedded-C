#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;
int counter=0;
mutex mtx;

void work(){
    for(int i=0;i<10000;i++){
        // mtx.lock();
        counter++;
        // mtx.unlock();
    }
}
int main(){
    thread t1(work);
    thread t2(work);
    t1.join();
    t2.join();
    cout<<"最终结果："<<counter<<endl;
    return 0;
}