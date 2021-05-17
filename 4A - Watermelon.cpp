#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES\n";
    }
    if (w % 2 == 1 || w <= 2)
    {
        cout << "NO\n";
    } 
    return 0; 
}