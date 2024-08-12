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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vll v(n);
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans = 1, cnt = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(v[i+1] - v[i] > k) cnt = 1;
            else cnt++;
            ans = max(ans,cnt);
        }
        cout<<n-ans<<nl;
    }
}