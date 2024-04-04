#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = 0;
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            bool k = true;
            for (int j = 0; j <= index; j++)
            {
                if (arr[i] == arr2[j])
                {
                    k = false;
                    break;
                }
            }
            if(k)
            {
                arr2[index] = arr[i];
                index++;
            }
        }
        if(n == 2)
        {
            cout<<"YES"<<endl;
        }
        if(index>2)
        {
            cout<<"NO"<<endl;
        }
        {

        }
    }
}