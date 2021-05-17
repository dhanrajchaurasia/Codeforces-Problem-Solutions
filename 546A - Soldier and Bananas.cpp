#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w, need = 0;
    cin >> k >> n >> w ;
    for (long long i = 1; i <= w; i++)
    {
        need += k * i;
    }
    if (need > n)
    {
        cout << need - n << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }
    return 0; 
}