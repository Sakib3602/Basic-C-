#include <bits/stdc++.h>
using namespace std;
int main()
{

    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[8];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[6] = 23;
    b[7] = 0;
    b[8] = 90;
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }

    delete[] a;


    return 0;
}