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
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k = 0,index = 0;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        for (int i = 0; i < b.size(); i++)
        {
            if (a[index] == b[i])
            {
                k++;
                index++;
            }
            
        }
        cout<<k<<nl;
        
        
        
        
        
    }
}