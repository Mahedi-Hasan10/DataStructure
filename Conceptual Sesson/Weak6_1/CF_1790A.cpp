/*
     Author : Mahedi-Hasan10
     Date : 10-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pi = "314159265358979323846264338327";
        int ans = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
                ans++;
            else
                break;
        }
        cout << ans << "\n";
    }

    return 0;
}