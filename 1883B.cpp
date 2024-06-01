#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
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
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> letter;
        for (char ch : s)
        {
            letter[ch]++;
        }
        int x = 0;
        for (const auto &pair : letter)
        {
            if (pair.second % 2 != 0)
                x++;
        }

        if (x == 0)
        {
            yes;
        }
        else if (x > k + 1)
        {
            no;
        }
        else
            yes;
    }

    return 0;
}
