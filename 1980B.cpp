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
        int n, f, k;
        cin >> n >> f >> k;
        vint a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int fav;
        fav = a[f-1];

        sort(a.begin(), a.end());
        reverse(a.begin(),a.end());

        auto it = find(a.begin(), a.end(), fav);

        int p;
        if (it != a.end())
        {
            p = distance(a.begin(), it);
        }
        int count = 0;
        for(auto ck : a)
        {
            if(ck == fav)
            {
                count++;
            }
        }

        if (p + count <= k)
        {
            yes;
        }
        else if (p+1 <= k && a[p+1] == fav)
        {
            cout << "MAYBE" << nl;
        }
        else if (p+1  <= k)
        {
            yes;
        }
        else
        {
            no;
        }
        
    }
}