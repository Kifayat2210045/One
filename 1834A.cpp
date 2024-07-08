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
        vint v(l);
        int cnt = 0;

        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        while (1)
        {
            int sum = 0, mltp = 1;
            for (auto &i : v)
            {
                sum += i;
                mltp *= i;
            }
            if (sum >= 0 && mltp == 1)
            {
                cout << cnt << nl;
                break;
            }
            else
            {
                auto it = find(v.begin(), v.end(), -1);
                int d = distance(v.begin(), it);
                v[d] = 1;
                cnt++;
            }
        }
    }
}
