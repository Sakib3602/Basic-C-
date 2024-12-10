#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string S, X;
        cin >> S >> X;

        int pos = 0;
        while ((pos = S.find(X, pos)) != string::npos)
        {
            S.replace(pos, X.size(), "#");
        }
        cout << S;
    }

    return 0;
}