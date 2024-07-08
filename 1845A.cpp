#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>
#define debug(x) cout << x << nl

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x == 1)
        {
            no;
        }
        else if (x != 1)
        {
            yes;
            cout << n << nl;
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << nl;
        }
        else if (x == 1)
        {
            if (n % 2 == 0)
            {
                yes;
                cout << n / 2 << nl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << nl;
            }
            else
            {
                if (k >= 3)
                {
                    yes;
                    cout << n / 2 << nl;
                    for (int i = 0; i < n / 2 - 1; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << nl;
                }
                else
                    no;
            }
        }
    }
}