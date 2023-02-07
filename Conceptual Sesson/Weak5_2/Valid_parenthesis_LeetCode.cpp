/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
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

    if (st.empty() == true)
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}