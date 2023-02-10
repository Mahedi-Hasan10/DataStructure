/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Stack
{
public:
    int a[MAX_SIZE];
    int st_size;
    Stack()
    {
        st_size = 0;
    }
    void Push(int val)
    {
        if (st_size + 1 >= MAX_SIZE)
        {
            cout << "Stack is full!!\n";
            return;
        }
        st_size++;
        a[st_size - 1] = val;
    }
    void Pop()
    {
        if (st_size == 0)
        {
            cout << "Stack is empty!!\n";
            return;
        }
        a[st_size - 1] = 0;
        st_size--;
    }

    int Top()
    {
        if (st_size == 0)
        {
            cout << "Stack is empty!!\n";
            return -1;
        }

        return a[st_size - 1];
    }
};
int main()
{
    Stack st;
    st.Push(40);
    cout << st.Top() << "\n";

    st.Push(30);
    cout << st.Top() << "\n";

    st.Push(20);
    cout << st.Top() << "\n";

    st.Push(10);
    cout << st.Top() << "\n";

    st.Pop();
    st.Pop();
    cout << st.Top() << "\n";

    return 0;
}