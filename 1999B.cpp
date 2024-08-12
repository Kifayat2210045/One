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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int win = 0;
        if (a > c && a > d && b > c && b > d)
        {
            win += 4;
        }
        else if (((a > c && b >= d) || (a >= c && b > d))&& ((a > d && b>=c)||(a >= d && b > c)))
        {
            win +=4;
        }
        else if ((a > c && b >= d)|| (a >= c && b > d)||(a >d && b >=c)||(a >= d && b >c))
        {
            win += 2;
        }
        cout<<win<<nl;
    }
}