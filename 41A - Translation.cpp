#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int z = 0;
    if (a.length() == b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[b.length() - 1 - i])
            {
                z++;
            }
        }
    }
    if (z == a.length())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0; 
}