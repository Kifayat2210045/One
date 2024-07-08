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
        int x,k;
        cin>>x>>k;
        if (x < k)
        {
            cout<<1<<nl;
            cout<<x<<nl;
        }
        else if (x >= k)
        {
            if(x % k == 0)
            {
                cout<<2<<nl;
                cout<<x-1<<" "<<1<<nl;
            }
            else
            {
                cout<<1<<nl;
                cout<<x<<nl;
            }
        }
        
        

        
        
        
    }
}