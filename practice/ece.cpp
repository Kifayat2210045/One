#include<bits/stdc++.h>
using namespace std;
#define mod 1000000003

int cube_func(int n)
{
    int sum = 0;
    for (double i = 1; i <= n; i++)
    {
        sum += pow(i,3);
    }
    return sum;   
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int f;
        cin>>f;
        int sum = 0;
        for (int i = 1; i <= f; i++)
        {
            sum += cube_func(i);
        }
        cout<<sum%mod<<endl;
        
    }
    
}