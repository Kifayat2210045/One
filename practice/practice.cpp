#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int c = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = a; j <= b; j++)
        {
            if (i * j <= k)
            {
                c++;
            }
        }
    }
    cout << c << endl;
}
