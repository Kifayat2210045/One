#include <iostream>
using namespace std;

int main()
{
    int tcase;
    cin >>tcase;
    for (int i = 0; i < tcase; i++)
    {
        int a, b, c, tent = 0,flag = 0;
        cin >>a>>b>>c;

        tent += a;

        if (b % 3 == 0)
        {
            tent += b / 3;
            if (c < 3 && c > 0)
            {
                tent++;
            }
            else if(c > 0)
            {
                tent += c / 3 + 1;
            }
        }
        else if (b < 3)
        {
            int x = 3 - b;
            b += x;
            c -= x;
            if (b % 3 == 0 && c >= 0)
            {
                tent += b / 3;
                if (c < 3 && c > 0)
                {
                    tent++;
                }
                else if(c > 0)
                {
                    tent += c / 3 + 1;
                }
            }
            else
            flag++;  
        }
        else if (b > 3)
        {
            int x = b % 3;
            tent += b / 3;
            if ((c+x) >= 3 && (c+x) % 3 != 0 )
            {
                tent += (c+x) / 3 + 1;
            }
            else if ((c+x) >= 3 && (c+x) % 3 == 0 )
            {
               tent += (c+x) / 3;
            }
            else
            flag++;
        }
        if (flag != 0)
        {
            cout<<-1<<endl;
        }
        else
        cout <<tent<< endl;
    }
}