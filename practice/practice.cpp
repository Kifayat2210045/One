#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
            ll i;
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
            if (arr[n] != 0)
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
            }
            int cnt = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] != 0)
                {
                    if (org % arr[i] == 0)
                    {
                        cnt++;
                    }
                }
                if(arr[i] == 0)
                {
                    cnt++;
                }
            }
            if (cnt == arr.size())
            {
                cout << org << endl;
                break;
            }
        }
    }
}