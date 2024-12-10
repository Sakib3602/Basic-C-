#include <bits/stdc++.h>
using namespace std;

int* Fun(int x)
{
    int* A = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin >> A[i];
    }
    sort(A,A + x, greater<int>());

    return A;
}

int main()
{
    int A;
    cin >> A;
    int* p = Fun(A);
    for (int i = 0; i < A; i++)
    {
        cout << p[i] << " ";
    }
    

    return 0;
}