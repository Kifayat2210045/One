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
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int xor_sum = accumulate(v.begin(),v.end(),0,bit_xor<int>());
        if(n % 2 != 0)
        {
            cout<<xor_sum<<nl;
        }
        else
        {
            if(xor_sum == 0) cout<<0<<nl;
            else cout<<-1<<nl;
        }
    }
}