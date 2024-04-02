#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        n++;
        vector<int> stn(n);
        stn[0] = 0;
        for (int i = 1; i < n; i++) {
            cin >> stn[i];
        }
        stn.push_back(x);
        vector<int> max(n + 1, 0); 
        for (int i = 0; i < n; i++) {
            max[i] = stn[i + 1] - stn[i];
        }
        max[n] = 2 * (x - stn[n - 1]); 
        int fuel = *max_element(max.begin(), max.end()); 
        cout << fuel << endl;
    }
    return 0;
}
