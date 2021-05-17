#include <bits/stdc++.h>
using namespace std;
int find(int i, int j){
    if (i == 3 && j == 3)
    {
        return 0;
    }
    if ((i == 2 && j == 3) || (i == 3 && j == 2) || (i == 4 && j == 3) || (i == 3 && j == 4))
    {
        return 1;
    }
    if ((i == 1 && j == 3) || (i == 3 && j == 1) || (i == 5 && j == 3) || (i == 3 && j == 5))
    {
        return 2;
    }
    if ((i == 2 || i == 4) && (j == 2 || j == 4))
    {
        return 2;
    }
    if ((i == 1 && j == 2) || (i == 2 && j == 1) || (i == 4 && j == 1) || (i == 1 && j == 4) || (i == 5 && j == 2) || (i == 2 && j == 5) || (i == 4 && j == 5) || (i == 5 && j == 4))
    {
        return 3;
    }
    if ((i == 1 || i == 5) && (j == 1 || j == 5))
    {
        return 4;
    }
}
int main()
{
    int a[6][6];
    int z = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                z = find(i, j);
            }
        }
    }
    cout << z << "\n";
    return 0; 
}