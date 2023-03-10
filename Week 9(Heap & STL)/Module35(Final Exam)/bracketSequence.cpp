/*
     Author : Mahedi-Hasan10
     Date : 08-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(' or ch == '{' or ch == '[')
            st.push(ch);
        else if (ch == ')' and st.empty() == false and st.top() == '(')
        {
            st.pop();
        }
        else if (ch == '}' and st.empty() == false and st.top() == '{')
        {
            st.pop();
        }
        else if (ch == ']' and st.empty() == false and st.top() == '[')
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }

    return st.empty();
}
int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}