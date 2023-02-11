/*
     Author : Mahedi-Hasan10
     Date : 11-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 10;
template <class T>
class Stack
{
public:
    T a[MAX_SIZE];
    int st_size;
    Stack()
    {
        st_size = 0;
    }
    void Push(T val)
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

    T Top()
    {
        if (st_size == 0)
        {
            cout << "Stack is empty!!\n";
            T ar;
            return ar;
        }

        return a[st_size - 1];
    }
};
int main()
{
    Stack<char> ch;
    ch.Push('a');
    cout << ch.Top() << "\n";
    ch.Push('b');
    cout << ch.Top() << "\n";

    ch.Push('c');
    cout << ch.Top() << "\n";

    ch.Push('d');
    cout << ch.Top() << "\n";

    return 0;
}