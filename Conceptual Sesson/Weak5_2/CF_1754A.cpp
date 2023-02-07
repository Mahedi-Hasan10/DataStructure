/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        string st;
        cin >> st;
        stack<char> q_ch;
        for (int i = 0; i < sz; i++)
        {
            char ch = st[i];
            if (ch == 'Q')
                q_ch.push(ch);
            else
            {
                if (q_ch.empty() == false)
                {
                    q_ch.pop();
                }
            }
        }
        if (q_ch.empty() == true)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}