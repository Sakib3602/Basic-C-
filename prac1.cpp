#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    char sec;
    int mark;
    int clas;
    Student(string name,int roll,char sec,int mark,int clas){
        this->name = name;
        this->roll = roll;
        this->clas = clas;
        this->mark = mark;
        this->sec = sec;
    }
};
int main()
{
    Student Sakib("Sakib Sarkar",1,'A',99,10);
    Student Rakib("Rakib Cudna",2,'B',89,10);
    Student Nakib("Nakib Bc",4,'D',99,10);

    int k = max({Sakib.mark,Rakib.mark,Nakib.mark});

    if(Sakib.mark == k){
        cout << Sakib.name;
    }
    else if(Rakib.mark == k){
        cout << Rakib.name;
    }
    else if(Nakib.mark == k){
        cout << Nakib.name;
    }
    
    return 0;
}