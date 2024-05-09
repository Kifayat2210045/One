#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ece, n = 0;
        cin >> ece;
        ll org = ece;
        vector<int> arr;
        bool k = true;
        while (k)
        {
            int i;
            i = ece % 10;
            arr.push_back(i);
            ece = ece / 10;
            if (ece / 10 == 0)
            {
                arr.push_back(ece);
                break;
            }
        }
        while (1)
        {
            if (org % arr[n] != 0)
            {
                org++;
                n = 0;
            }
            else
            {
                n++;
            }
            if ((org % arr[n] == 0) && (org % arr[n + 1] == 0) && (org % arr[n + 2] == 0))
            {
                cout << org << endl;
                break;
            }
        }
    }
}