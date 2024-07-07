#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout<< "YES" <<nl
#define no cout<< "NO" <<nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>
#define debug(x) cout<<x<<nl

int diff(int x, int y)
{
    return y - x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        vint v(l), a(l - 1);
        for(int i = 0; i < l; i++)
        {
            cin>>v[i];
        }

        if(is_sorted(v.begin(), v.end()))
        {
            for (int i = 0; i < l - 1; i++)
            {
                a[i] = diff(v[i], v[i + 1]);
            }
            auto min = min_element(a.begin(), a.end());
            if(*min == 0) cout << 1 << nl;
            else
            {
                if(*min % 2 != 0)cout << (*min + 1) / 2 << nl;
                else cout<<(*min+2)/2<<nl;
            }
        }
        else cout << 0 << nl;
    }
    return 0;
}
