#include <bits/stdc++.h>
using namespace std;

// #define yes cout<< <<endl
// #define no cout<< <<endl
// #define ll long long
// #define ull unsigned long long
// #define vll vector<ll>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, dlt = 0;
        cin >> size;
        string vec;
        cin >> vec;
        for (int i = 0; i < size - 2; i++)
        {
            if ((vec.substr(i, 3) == "map") || (vec.substr(i, 3) == "pie"))
            {
                vec[i+2] = 'x';
                dlt++;
            }
        }
        cout << dlt << endl;
    }
}