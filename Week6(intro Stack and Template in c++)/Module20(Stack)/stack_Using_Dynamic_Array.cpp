/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *a;
    int st_size;
    int array_cap;
    Stack()
    {
        a = new int[1];
        st_size = 0;
        array_cap = 1;
    }

    void increase_size()
    {
        int *tmp;
        tmp = new int[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        delete[] tmp;
        array_cap = array_cap * 2;
    }
    void Push(int val)
    {
        if (st_size + 1 > array_cap)
        {
            increase_size();
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