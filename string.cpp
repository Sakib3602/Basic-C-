#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S;
    cin >> S;
    string bdsm;
    cin >> bdsm;
    int a = 0, b = 0;
    for (int i = 0; i < 6; i++)
    {
        if (bdsm[i] == 'A')
        {
            a++;
        }
        else if (bdsm[i] == 'D')
        {
            b++;
        }
    }

    if (a > b)
    {
        cout << "Anton";
    }
    else if (a < b)
    {
        cout << "Danik";
    }
    else if (a == b)
    {
        cout << "Friendship";
    }

    return 0;
}