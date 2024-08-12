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
        vint v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        if (v[0] == v.back())
        {
            no;
        }
        else
        {
            yes;
            for (int i = 1; i < n; i++)
            {
                if (v[i] != v[0])
                {
                    swap(v[0],v[i]);
                    break;
                }
            }
            for(int i = 0; i < n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout << nl;
        }
    }
}