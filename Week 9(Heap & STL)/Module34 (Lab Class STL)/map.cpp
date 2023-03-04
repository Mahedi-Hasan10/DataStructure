/*
     Author : Mahedi-Hasan10
     Date : 04-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    mp['a'] = 10;
    mp['d'] = 20;
    mp['b'] = 30;
    mp['c'] = 50;
    mp['g'] = 40;
    mp['k'] = 70;
    mp['e'] = 80;

    for (auto it : mp)
    {
        cout << "Key : " << it.first << " value : " << it.second << "\n";
    }

    return 0;
}