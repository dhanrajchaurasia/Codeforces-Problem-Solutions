#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x, steps = 0;
    cin >> x;
    while (x)
    {
        if (x >= 5)
        {
            x -= 5;
        }
        else if (x >= 4)
        {
            x -= 4;
        }
        else if (x >= 3)
        {
            x -= 3;
        }
        else if (x >= 2)
        {
            x -= 2;
        }
        else
        {
            x --;
        }
        steps++;
    }
    cout << steps << "\n";
    return 0; 
}