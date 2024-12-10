#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    string t;

    for (int i = 0; i < test; i++)
    {
        int sum = 0;
        int sum2 = 0;
        cin >> t;
        for (int i = 0; i <= 2; i++)
        {
            sum += t[i] - '0';
          
        }
        for (int i = 3; i <= 5; i++)
        {
            sum2 += t[i] - '0';
            
        }

        if (sum == sum2)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}