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
        int la;
        cin>>la;
        vint a(la);
        int sum = 0;
        for (int i = 0; i < la; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum % 2 == 0) yes;
        else no;
        
        
    }
}