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
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if ((v[0] + v[1] + v[2]) % 2 == 1)
        {
            cout << "-1\n";
            continue;
        }
        cout << (v[0] + v[1] + v[2] - max(0, v[2] - v[0] - v[1])) / 2 << "\n";
    }
    
}
