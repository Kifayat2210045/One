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
        int l;
        cin >> l;
        vint v(l), b(l);
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }
        int max = *max_element(v.begin(), v.end());
        int min = *min_element(v.begin(), v.end());
        int sum = max + min;
        for (int i = 0; i < l; i++)
        {
            b[i] = sum - v[i];
            cout << b[i] << " ";
        }
        cout << nl;
    }
}