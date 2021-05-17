#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n+1];
    int l[n+1];
    for (int i = 0; i < n+1; i++)
    {
        getline(cin, s[i]);
        l[i] = s[i].length();
    }
    for (int i = 1; i < n+1; i++)
    {
        if (l[i] <= 10)
        {
            cout << s[i] << "\n";
        }
        else
        {
            cout << s[i].substr(0, 1) << l[i]-2 << s[i].substr(s[i].length()-1) << "\n";
        }
    }
    return 0; 
}