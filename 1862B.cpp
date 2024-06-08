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
        ll n;
        cin>>n;
        vll b(n),a;
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        a.push_back(b[0]);
        for (ll i = 0; i < n-1; i++)
        {
            if(b[i] <= b[i+1])
            {
                a.push_back(b[i+1]);
            }
            else if(b[i] > b[i+1])
            {
                a.push_back(b[i+1]);
                a.push_back(b[i+1]);
            }
        }
        cout<<a.size()<<nl;
        for(auto x : a)
        {
            cout<<x<<" ";
        }
        cout<<nl;
        
        

    }
}