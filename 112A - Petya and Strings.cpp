#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int c, d, z = 0;
    for (int i = 0; i < a.length(); i++)
    {
        a.at(i) = tolower(a.at(i));
        b.at(i) = tolower(b.at(i));
        c = a.at(i);
        d = b.at(i);
        if (c > d)
        {
            cout << "1\n";
            z++;
            break;
        }
        if (c < d)
        {
            cout << "-1\n";
            z++;
            break;
        }
        // else{
        //     if (i == a.length()-1)
        //     {
        //         cout << "0\n";
        //     }
        // }
    }
    if (z == 0)
    {
       cout << "0\n";
    }
    return 0; 
}