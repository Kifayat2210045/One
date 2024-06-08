#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout<< "YES" <<nl
#define no cout<< "NO" <<nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> tool;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            tool.push_back(x);
        }
        for( auto &t : tool)
        {
            b+=min(a-1,t);
        }
        cout<<b<<nl; 
    }
    return 0;
}
