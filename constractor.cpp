#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char name;
    int number;
    Student(int roll, char name, int number)
    {
        this->roll = roll;
        this->number = number;
        this->name = name;
    }
};
Student fun()
{
    Student lol(1, 'k', 90);
    return lol;
}

int main()
{
    Student sakib(23, 's', 34);

    Student obj = fun();

    cout << sakib.roll << " " << obj.name;

    return 0;
}