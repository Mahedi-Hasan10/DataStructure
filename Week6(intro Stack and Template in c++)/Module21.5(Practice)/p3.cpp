/*
     Author : Mahedi-Hasan10
     Date : 11-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
public:
    T *arr;
    int st_size;
    int ar_cap;
    Stack()
    {
        arr = new T[1];
        st_size = 0;
        ar_cap = 1;
    }

    void increase_size()
    {
        T *tmp;
        tmp = new T[ar_cap * 2];
        for (int i = 0; i < ar_cap * 2; i++)
            tmp[i] = arr[i];
        swap(arr, tmp);
        delete tmp;
        ar_cap = ar_cap * 2;
    }
    void PUSH(T val)
    {
        if (st_size + 1 >= ar_cap)
        {
            increase_size();
        }
        st_size++;
        arr[st_size - 1] = val;
    }
    void POP()
    {
        if (st_size == 0)
        {
            cout << "Stack is full\n";
            return;
        }
        st_size--;
    }
    T TOP()
    {
        if (st_size == 0)
        {
            cout << "Stack is empty!!\n";
            T a;
            return a;
        }
        return arr[st_size - 1];
    }
};
int main()
{
    Stack<int> st;
    st.PUSH(10);
    cout << st.TOP() << "\n";
    st.PUSH(20);
    cout << st.TOP() << "\n";
    st.PUSH(30);
    cout << st.TOP() << "\n";
    st.PUSH(40);
    cout << st.TOP() << "\n";

    return 0;
}