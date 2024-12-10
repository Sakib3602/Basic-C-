#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    char S;
    char x;
    cin >> A >> S >> B >> x >> C;
    int sum;
    long long n;
    if(S == '+'){
        sum = A + B;
        if(sum == C){
            cout << "Yes";
        }
        else cout << sum;

    }
    else if(S == '-'){
        sum = A - B;
        if(sum == C){
            cout << "Yes";
        }
        else cout << sum;

    }
    else if(S == '*'){
        n = A * B;
        if(n == C){
            cout << "Yes";
        }
        else cout << n;

    }
    return 0;
}