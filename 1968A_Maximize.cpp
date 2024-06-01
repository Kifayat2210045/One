#include<bits/stdc++.h>
using namespace std;

#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>> x;
        int max = 0;
        int ans;

        for (int i = x-1; i > 0; i--)
        {    
            if(max < gcd(x,i) + i)
            {
                max = gcd(x,i) + i;
                ans = i;
            } 
        }
        cout<<ans<<nl;
    }
}