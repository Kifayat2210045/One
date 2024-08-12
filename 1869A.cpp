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
        int n;
        cin>>n;
        vint v(n);
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if(n % 2 == 0)
        {
            cout<<2<<nl;
            cout<<1<<" "<<n<<nl;
            cout<<1<<" "<<n<<nl;
        }
        else
        {
            cout<<4<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<<n-1<<" "<<n<<nl;
            cout<<n-1<<" "<<n<<nl;
        }
    }
}