#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout<< "YES" <<nl
#define no cout<< "NO" <<nl
#define ll long long int
#define ull unsigned long long
#define vll vector<ll>
#define vint vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        if(x<y)
        {
            cout<<x<<" "<<y<<nl;
        }
        else if (y<x)
        {
            cout<<y<<" "<<x<<nl;
        }
        else
        {
            cout<<x<<" "<<y<<nl;
        }
        //test1
        
    }
}