#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
const int N=2e5+9;
int a[N];
int b[N];
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=(n+1);i++){
            cin>>b[i];
        }
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=abs(b[i]-a[i]);
        }
        int maximum_a=*max_element(a+1,a+n+1);
        int minimun_a=*min_element(a+1,a+n+1);
        int maximum_b=*max_element(b+1,b+n+1);
        int minimun_b=*min_element(b+1,b+n+1);
        int minimum=min(minimun_a,minimun_b);
        int maximum=max(maximum_a,maximum_b);
        if(b[n+1]>=minimun_a&&b[n+1]<=maximum_a){
            sum++;
        }
        else{
            sum+=min(abs(b[n+1]-minimun_a),abs(maximum_a-b[n+1]));
            sum++;
        }
        cout<<sum<<endl;
    }
}
