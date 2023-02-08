/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;

bool check_palindrom(string s, int st, int end)
{
    if (st >= end)
        return true;
    if (s[st] != s[end])
        return false;
    return check_palindrom(s, st + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    bool ans = check_palindrom(s, 0, (s.size() - 1));
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}