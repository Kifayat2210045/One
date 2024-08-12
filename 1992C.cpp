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
      int n, m, k;
      cin >> n >> m >> k;
      int x = 1;
      for (int i = n; i > 0; i--)
      {
         if (i <= m)
         {
            cout << x << " ";
            x++;
         }
         else
         cout << i << " ";
      }
      cout << nl;
   }
}