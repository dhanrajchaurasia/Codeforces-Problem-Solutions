#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; // a is less than or equal to b.
    cin >> a >> b;
    // "a" becomes triple after a year while "b" becomes double after a year
    int year = 0;
    while (a <= b)
    {
        year++;
        a *= 3;
        b *= 2;
    }
    cout << year << "\n";
}