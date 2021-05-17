#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int z = 0;
    stringstream num(n);
    int m = 0;
    num >> m;
    for (int i = 0; i < n.length(); i++)
    {
        if (n.at(i) == '4' || n.at(i) == '7')
        {
            z++;
        }
    }
    if (z == n.length() || m % 4 == 0 || m % 7 == 0 || m % 47 == 0 || m % 744 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0; 
}