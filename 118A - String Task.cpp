#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    getline(cin, s);
    string sub[s.length()];
    string str;
    int z = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s.at(i) = tolower(s.at(i));
        if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'y')
        {
        }
        else
        {
            sub[z] = s.at(i);
            if (s.at(i) == ' ')
            {
                sub[z] = sub[z];
            }
            else
            {
                sub[z] = '.' + sub[z];
            }
            z++;
        }
    }
    str = sub[0];
    for (int i = 1; i < z; i++)
    {
        str += sub[i];
    }
    cout << str << "\n";
    return 0; 
}
    // string ans = "";
    // string sub[s.length()];
    // string fullstop = ".";
    // for (int i = 0; i < s.length(); i++)
    // {
    //     sub[i] = s.substr(i, 1);
    //     if (sub[i] = "a" || sub[i] = "A" || sub[i] = "e" || sub[i] = "E" || sub[i] = "o" || sub[i] = "O" || sub[i] = "u" || sub[i] = "U" || sub[i] = "y" || sub[i] = "Y")
    //     {
    //         sub[i] = sub[i].erase(i, 1);
    //     }
    //     else
    //     {
    //         sub[i] += fullstop;
    //     }
    //     ans += sub[i];
    // }
    // for (int i = 0; i < s.length(); i++)
    // {
        // if (s.find("a") != -1)
        // {
        //     n = s.find("a");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("o") != -1)
        // {
        //     n = s.find("o");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("y") != -1)
        // {
        //     n = s.find("y");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("e") != -1)
        // {
        //     n = s.find("e");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("u") != -1)
        // {
        //     n = s.find("u");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("i") != -1)
        // {
        //     n = s.find("i");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("A") != -1)
        // {
        //     n = s.find("A");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("O") != -1)
        // {
        //     n = s.find("O");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("Y") != -1)
        // {
        //     n = s.find("Y");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("E") != -1)
        // {
        //     n = s.find("E");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("U") != -1)
        // {
        //     n = s.find("U");
        //     s = s.erase(n, 1);
        // }
        // if (s.find("I") != -1)
        // {
        //     n = s.find("I");
        //     s = s.erase(n, 1);
        // }
        // else{
        // sub = s.at(i);
        // sub = '.' + sub;
        // s = s.replace(i, i + 1, sub);
        // }
    // }