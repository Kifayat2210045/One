#include <bits/stdc++.h>
using namespace std;
#define lld long double

int main()
{
    lld s, acc, v;
    cin >> s >> acc >> v;
    lld a = acc / 2;
    lld b = -v;
    lld c = -s;
    lld x = b * b - 4 * a * c;
    int t = (-b + sqrt(x)) / (2 * a);
    cout << t << endl;
    return 0;
}
