#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    char x[100];
    int c ;

};
int main()
{
    student d;
    d.c = 121;
    d.roll = 1;
    char d1[100] = "Sakib sarkar";
    strcpy(d.x,d1);


    cout << d.c << d.roll << d.x;

    
    return 0;
}