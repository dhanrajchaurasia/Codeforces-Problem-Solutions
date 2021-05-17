#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num[s.length()], z = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '+')
        {
        }
        else
        {
            num[z] = s.at(i) - 48;
            z++;
        }
    }
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < z-1; j++)
        {
            if (num[j+1] < num[j])
            {
                int temp = num[j+1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < z-1; i++)
    {
        cout << num[i] << "+";
    }
    cout << num[z-1];
    return 0; 
}