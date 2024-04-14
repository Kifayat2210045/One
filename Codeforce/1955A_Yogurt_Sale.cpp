#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int x,y;
        x = n*a;
        y = (n%2)*a + (n/2)*b;
        if(x>y)
        {
            cout<<y<<endl;
        }
        else if (x<y)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
        
    }
}