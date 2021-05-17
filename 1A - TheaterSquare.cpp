#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long)ceil(n / a) * (long long)ceil(m / a) << endl;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long double n, m, a;
//     cin >> n >> m >> a;
//     long double A = n * m, B = a * a;
//     long double N = A / B;
//     long long flagstone = A / B;
//     long double diff = N - flagstone;
//     if (diff == 0.0)
//     {
//         cout << flagstone << "\n";
//     }
//     else if (diff == 0.25)
//     {
//         flagstone += 2;
//         cout << flagstone << "\n";
//     }
//     else if (diff == 0.75)
//     {
//         flagstone += 3;
//         cout << flagstone << "\n";
//     }
//     else
//     {
//         flagstone += 1;
//         cout << flagstone << "\n";
//     }

//     return 0;
// }