#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;

    cin >> X >> Y;
    int sum,  sub;
    sum = X + Y;
    long long multi = 1ll * X * Y;
    sub = X - Y;

    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << multi << endl;
    cout << X << " - " << Y << " = " << sub << endl ;

    return 0;
}