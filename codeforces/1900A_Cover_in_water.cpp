#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        cin >> str;
        int c = 0;
        for (int i = 0; i < x; i++)
        {
            if (str[i] == '.')
            {
                c++;
            }
            if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
            {
                c = 2;
                break;
            }
        }
        cout << c << endl;
    }
}