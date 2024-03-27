#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > v;
    vector<int> temp;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin>>y;
            temp.push_back(y);
        }
        v.push_back(temp);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}