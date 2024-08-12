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
        int a,b,c;
        vint v(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>v[i];
        }
        
        for (int i = 0; i < 5; i++)
        {
            if(v[0] <= v[1] && v[0] <= v[2])
            {
                v[0]++;
            }
            else if(v[1] <= v[0] && v[1] <= v[2])
            {
                v[1]++;
            }
            else if(v[2] <= v[1] && v[2] <= v[0])
            {
                v[2]++;
            }
        }
        cout<<v[0]*v[1]*v[2]<<nl;
    }
}