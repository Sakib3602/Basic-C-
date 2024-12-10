#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin , S);

    stringstream ss(S);
    string word;

    int ro = 0;

    while(ss >> word){
        if(word == "Jessica"){
            ro = 1;
            break;
        }
    }
    if(ro == 1){
        cout << "YES";
    }else cout << "NO";
    return 0;
}