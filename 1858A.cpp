#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>
#define debug(x) cout << x << nl

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if(c % 2 == 0)
        {
            if(a > b) cout<< "First"<<nl;
            else cout<<"Second"<<nl;
        }
        else
        {
            if(b > a) cout<<"Second"<<nl;
            else cout<<"First"<<nl;
        }
        
    }
}