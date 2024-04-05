#include <bits/stdc++.h>
using namespace std;
const int MX = 100 + 5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> occ;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            occ[x]++;
        }
        if (occ.size() >= 3)
            puts("No");
        else
        {
            if (abs((*occ.begin()).second - (*occ.rbegin()).second) <= 1)
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
    }
    return 0;
}
