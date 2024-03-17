#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x = 0,z;
    string y;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        cin >> y;
        if (y == "X++")
        {
            x++;
        }
        else if (y == "++X")
        {
            ++x;
        }
        else if (y == "X--")
        {
            x--;
        }
        else if (y == "--X")
        {
            --x;
        }
    }
    cout << x << endl;
}
