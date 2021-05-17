#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int z = 0;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (s.at(i) == s.at(j) && i != j)
            {
                z++;
                s.at(j) = (char)z;
            }
        }
    }
    int k = n - z;
    if (k % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0; 
}