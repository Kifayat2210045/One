#include <bits/stdc++.h>
using namespace std;

#define yes cout < < < < endl
#define no cout < < < < endl
#define ll long long
#define ull unsigned long long
#define vll vector<ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        set<char> st;
        for (auto x : s)
            st.insert(x);
        vector<char> vc;
        for (auto x : st)
            vc.push_back(x);

        ll sz = vc.size();
        
        map<char, ll> mp;
        for (ll i = 0; i < sz; i++)
            mp[vc[i]] = i;
        for (ll i = 0; i < n; i++)
            s[i] = vc[sz - 1 - mp[s[i]]];
        cout << s << endl;
    }
    return 0;
}