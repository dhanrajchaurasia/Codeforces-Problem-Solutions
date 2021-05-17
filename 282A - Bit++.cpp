#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int val = 0;
    string op[n];
    for (int i = 0; i < n; i++)
    {
        cin >> op[i];
        if (op[i] == "++X")
        {
            ++val;
        }
        if (op[i] == "X++")
        {
            val++;
        }
        if (op[i] == "--X")
        {
            --val;
        }
        if (op[i] == "X--")
        {
            val--;
        }
    }
    cout << val << "\n";
    return 0;
}