#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"

bool beautypair(const vector<int>& v1,const vector<int>& v2)
{
    if (v1[0] != v2[0] && v1[1] == v2[1] && v1[2] == v2[2])
    {
        return true;
    }
    else if (v1[0] == v2[0] && v1[1] != v2[1] && v1[2] == v2[2])
    {
        return true;
    }
    else if (v1[0] == v2[0] && v1[1] == v2[1] && v1[2] != v2[2])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    optimize()
    int t;
    cin >> t;
    while (t--)
    {
        int s, count = 0;
        cin >> s;
        vector<int> v1(s);
        for (int i = 0; i < s; i++)
        {
            cin >> v1[i];
            
        }
        vector<vector<int>> v2(s - 2, vector<int>(3));
        for (int i = 0; i < s - 2; i++)
        {
            v2[i][0] = v1[i];
            v2[i][1] = v1[i + 1];
            v2[i][2] = v1[i + 2];
        }
        for (int i = 0; i < s-2; i++)
        {
            for (int j = i+1; j < s-2; j++)
            {
                if (beautypair(v2[i], v2[j]))
                {
                    count++;
                }
            }
        }
        cout << count << nl;
    }
}