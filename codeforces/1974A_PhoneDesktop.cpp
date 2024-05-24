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
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen = 0;
        if (y == 0 && x != 0)
        {
            screen++;
        }
        else if (y % 2 != 0)
        {
            screen = (y + 1) / 2;
        }
        else
        {
            screen = (y) / 2;
        }
        int tcell = screen * 15 - 4 * y;
        if (tcell < x)
        {
             screen += (x - tcell + 14) / 15;
        }
        cout << screen << endl;
    }
}