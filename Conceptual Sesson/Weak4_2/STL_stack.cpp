#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // if (st.empty() == false)
    //     st.pop();
    // if (st.empty() == false)
    //     st.pop();

    //     if (st.empty() == false)
    //     cout << st.top() << "\n";

    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}