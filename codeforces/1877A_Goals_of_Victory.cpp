#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,sum = 0;
        cin>>r;
        int arr[r];
        for(int i  = 0; i < r-1; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        cout<<-sum<<endl;
    }
}