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
        int l,max_int = 0, cnt = 0;
        cin >> l;
        vint v(l);
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
            if(v[i] == 0)
            {
                cnt++;
            }
            else
            {
                max_int = max(max_int,cnt);
                cnt = 0;
            }
        }
        cout<<max(max_int,cnt)<<nl;
    }
}