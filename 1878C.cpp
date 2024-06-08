#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout<< "YES" <<nl
#define no cout<< "NO" <<nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>
#define debug(x) cout<<x<<nl;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
       
       ll low = (k*(k+1))/2;
       ll high = (n*(n+1)/2) - ((n-k)*(n-k+1))/2;

       if(x >= low && x <= high) yes;
       else no;

        
    }
}