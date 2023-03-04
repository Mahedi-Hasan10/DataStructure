/*
     Author : Mahedi-Hasan10
     Date : 04-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // insert : O(logn)
    set<int> st;
    st.insert(5);
    st.insert(4);
    st.insert(1);
    st.insert(1);
    st.insert(3);
    st.insert(3);
    st.insert(7);
    st.insert(8);
    st.insert(9);
    st.insert(9);

    // printing set : O(n)
    cout << "Printing set : \n";
    for (auto it : st)
        cout << it << " ";
    cout << "\n";

    // get size : O(1)
    cout << st.size() << "\n";

    // Remove element : O(logn)
    st.erase(9);
    cout << "after erasing 9 Printing set : \n";
    for (auto it : st)
        cout << it << " ";
    cout << "\n";

    // Searching element : O(logn)
    if (st.find(8) != st.end())
    {
        cout << "8 is found\n";
    }
    else
    {
        cout << "8 is not found\n";
    }
    return 0;
}