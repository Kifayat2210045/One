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
        ll n, k;
        cin >> n >> k;
        vll v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll sum = 0;
        for (int i = 1; i < k; i++)
        {
            sum += v[i];
        }

        ll size = k-1;
        for (int i = k-1; i > 0; i--)
        {
            if (v[i] == 1)
            {
                size--;
            }
        }

        ll c = 0;
        for(int i = 1; i < k; i++)
        {
            if(v[i] != 1)
            {
                c+=v[i];
            }
        }
        ll t = sum + (c- size);
        cout<<t<<nl;
    }
}