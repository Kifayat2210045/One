#include<bits/stdc++.h>
using namespace std;

#define yes cout<< <<endl
#define no cout<< <<endl
#define ll long long
#define ull unsigned long long
#define vll vector<ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        ll c1,c2,ct;
        c1 = m/a + 1;
        c2 = m/b +1;
        cout<<c1+c2<<endl;
    }
}