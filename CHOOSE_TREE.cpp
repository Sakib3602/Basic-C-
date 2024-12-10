#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    int flag = 1;
    int sum = 0;
    for (int l = 0; l < T; l++)
    {
        int N, S;
        cin >> N >> S;
        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

         sort(A, A + N);

        for (int i = 0; i < N; i++)
        {
            int left = i + 1 , right = N - 1;

        }
    }

    return 0;
}