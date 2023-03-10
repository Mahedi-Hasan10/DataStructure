/*
     Author : Mahedi-Hasan10
     Date : 10-03-2023
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (m.count(s) == 0)
            cout << "-1" << endl;
        else
            cout << m[s] << endl;

        m[s] = i;
    }
    return 0;
}
