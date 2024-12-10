#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cin >> A[i];
    }

    int c = *max_element(A, A + x);
    cout << c;


    return 0;
}