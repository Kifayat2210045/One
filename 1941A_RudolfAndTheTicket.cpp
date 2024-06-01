#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> b(n);  
        vector<int> c(m);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }
        int sum = 0;
        for (auto x : b)
        {
            for(auto y : c)
            {
                if(x+y <= k)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }    
        
}