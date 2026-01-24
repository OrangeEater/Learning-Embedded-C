#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
    string name;
    int score;
    Student(string n,int s): name(n), score(s) {}
};

void printBestStudent(const vector<Student>& list){
    if(list.empty()) return;

    int bestIdx=0;
    for(int i=0;i<list.size();i++){
        if(list[i].score>list[bestIdx].score){
            bestIdx=i;
        }
    }

    cout<<"高分选手："<<list[bestIdx].name<<",分数"<<list[bestIdx].score<<endl;
}

void printFailStudent(const vector<Student>& list){
    if(list.empty()) return;
    for(const auto& s:list){
        if(s.score<96){
            cout<<"姓名："<<s.name<<"分数："<<s.score<<"，低于96分回家吧"<<endl;
        }
    }
}


int main(){
    vector<Student> classList;
    classList.push_back(Student("device", 90));
    classList.push_back(Student("niko", 95));
    classList.push_back(Student("donk", 100));
    classList.push_back(Student("zywoo", 98));

    cout<<"--战队成员名单--"<<endl;
    for(const auto& s:classList){
        cout<<"姓名："<<s.name<<"\t分数："<<s.score<<endl;
    }

    string newName;
    int newScore;
    cout<<"输入新选手名字：";
    cin>>newName;
    cout<<"请输入分数：";
    cin>>newScore;
    classList.push_back(Student(newName,newScore));

    cout<<"--战队成员名单--"<<endl;
    for(const auto& s:classList){
        cout<<"姓名："<<s.name<<"\t分数："<<s.score<<endl;
    }

    // 这里的 lambda 表达式 ( []... ) 是 C++ 的高级语法，表示比较规则
sort(classList.begin(), classList.end(), [](const Student& a, const Student& b) {
    return a.score > b.score; // 降序排列
});

    cout<<"--战队成员名单--"<<endl;
    for(const auto& s:classList){
        cout<<"姓名："<<s.name<<"\t分数："<<s.score<<endl;
    }

    printBestStudent(classList);
    printFailStudent(classList);
    return 0;
}