#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, m;
    long long int z = 0;
    cin >> n;
    for (long long int i = 0; i < n.length(); i++)
    {   
        if (n.at(i) == '4' || n.at(i) == '7')
        {
            z++;
        }
    }
    // stringstream ss;  
    // ss << z;  
    // ss >> m;
    m = to_string(z);
    long long int y = 0;
    for (long long int i = 0; i < m.length(); i++)
    {
        if (m.at(i) == '4' || m.at(i) == '7')
        {
            y++;
        }
    }
    if (y == m.length())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0; 
}