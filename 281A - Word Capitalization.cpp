#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s.at(0) = toupper(s.at(0));
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    return 0; 
}