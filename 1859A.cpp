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
        int n;
        cin >> n;
        vint a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vint b, c;
        int p = 0;
        while (a[p] == a[0])
        {
            p++;
        }
        for (int i = 0; i < p; i++)
        {
            b.push_back(a[i]);
        }
        for (int i = p; i < n; i++)
        {
            c.push_back(a[i]);
        }
        if (a.back() == a[0])
        {
            cout << -1 << nl;
        }
        else
        {
            cout << b.size() << " " << c.size() << nl;
            for (auto &x : b)
            {
                cout << x << " ";
            }
            cout << nl;
            for (auto &x : c)
            {
                cout << x << " ";
            }
            cout << nl;
        }
    }
}