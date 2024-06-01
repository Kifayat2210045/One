#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        string s, s1;
        cin >> s >> s1;

        int c = 0;
        bool done = false;
        while (1)
        {
            if (c > 5)
                break;
            if (s.find(s1) != -1)
            {
                done = true;
                break;
            }
            c++;
            s += s;
        }
        cout << (done ? c : -1) << endl;
    }

    return 0;
}