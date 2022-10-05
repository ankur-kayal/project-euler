/*
    Time Complexity : O(N^2) per test case
    Auxiliary Space Complexity : O(1) per test  case
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[21][21];
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (i <= 17)
            {
                int p = a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j];
                ans = max(ans, p);
            }
            if (j <= 17)
            {
                int p = a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
                ans = max(ans, p);
            }
            if (i <= 17 && j <= 17)
            {
                int p = a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3];
                ans = max(ans, p);
            }
            if (i >= 4 && j <= 17)
            {
                int p = a[i][j] * a[i - 1][j + 1] * a[i - 2][j + 2] * a[i - 3][j + 3];
                ans = max(ans, p);
            }
        }
    }
    cout << ans;
    return 0;
}