/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>

class Stack
{
public:
    T *a;
    int st_size;
    int array_cap;
    Stack()
    {
        a = new T[1];
        st_size = 0;
        array_cap = 1;
    }

    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        delete[] tmp;
        array_cap = array_cap * 2;
    }
    void Push(T val)
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
        st_size--;
    }

    T Top()
    {
        if (st_size == 0)
        {
            cout << "Stack is empty!!\n";
            T a;
            return a;
        }

        return a[st_size - 1];
    }
};
int main()
{
    Stack<int> st;
    st.Push(40);
    st.Push(30);
    st.Push(20);
    st.Push(10);
    cout << st.Top() << "\n";
    st.Pop();
    cout << st.Top() << "\n";
    st.Pop();
    cout << st.Top() << "\n";
    st.Pop();
    cout << st.Top() << "\n";

    Stack<char> st2;
    st2.Push('M');
    st2.Push('A');
    st2.Push('H');
    st2.Push('E');
    st2.Push('D');
    cout << st2.Top() << "\n";
    st2.Pop();
    cout << st2.Top() << "\n";
    st2.Pop();
    cout << st2.Top() << "\n";

    return 0;
}