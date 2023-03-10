/*
     Author : Mahedi-Hasan10
     Date : 10-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, x;
    set<int> st;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        st.insert(x);
    }
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
