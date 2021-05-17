#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char c[n];
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (c[i+1] == c[i])
        {
            z++;
        }
    }
    cout << z << "\n";
    return 0; 
}