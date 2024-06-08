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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int> a;
        for(char ch : s)
        {
            a[ch]++;
        }
        int x = 0;
        for (auto &p : a) 
        {
            if (m > p.second)
            {
                x += m - p.second;
            }
        }
        vector < char > ch;
        for(auto p : a)
        {
            ch.push_back(p.first);
        }
        if(ch.size() != 7)
        {
            x += m*(7-ch.size());
        }
        cout<<x<<nl;

    }
}