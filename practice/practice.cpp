#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        
        int c = (y - (x % y)) % y;
        
        cout << c << endl;
    }
    return 0;
}
