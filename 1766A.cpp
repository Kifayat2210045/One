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
        int n;
        cin >> n;
     
        if (n < 10)
        {
            cout << n << nl;
        }
        else if (n <= 100)
        {
            int r = n % 10;
            int x = (n - r) / 10;
            cout << x + 9 << nl;
        }
        else if(n > 100 && n <= 1000)
        {
            int r = n % 100;
            int x = (n - r) / 100;
            cout << x + 18 << nl;
        }
        else if(n > 1000 && n <= 10000)
        {
            int r = n % 1000;
            int x = (n - r) / 1000;
            cout << x + 27 << nl;
        }
        else if(n > 10000 && n <= 100000)
        {
            int r = n % 10000;
            int x = (n - r) / 10000;
            cout << x + 36 << nl;
        }
        else if(n > 100000)
        {
            int r = n % 100000;
            int x = (n - r) / 100000;
            cout << x + 45 << nl;
        }

    }
}