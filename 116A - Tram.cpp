#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    int current[n + 1];
    current[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i] >> b[i];
        current[i] = current[i - 1] - a[i] + b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (current[i + 1] < current[i])
        {
            int temp = current[i + 1];
            current[i + 1] = current[i];
            current[i] = temp;
        }
    }
    cout << current[n] << "\n";
    return 0; 
}