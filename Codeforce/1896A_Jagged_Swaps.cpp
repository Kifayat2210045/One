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
        vector<int> arr(x);
        bool k = true;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < x - 1; i++)
        {
            for (int j = 1; j < x - i; j++)
            {
                if (arr[j - 1] < arr[j] && arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        for (int i = 0; i < x - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                k = false;
            }
        }
        if (k == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}