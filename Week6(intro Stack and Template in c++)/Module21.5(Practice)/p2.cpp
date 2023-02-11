/*
     Author : Mahedi-Hasan10
     Date : 11-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node *next;
};

template <class T>
class LinkedList
{
public:
    node<T> *head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node<T> *create_new_node(T value)
    {
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insert_at_head(T value)
    {
        sz++;
        node<T> *a = create_new_node(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->next;
        delete a;
    }

    T getSize()
    {
        return sz;
    }
};

template <class T>
class Stack
{
public:
    LinkedList<T> l;
    Stack()
    {
    }
    void PUSH(T val)
    {
        l.insert_at_head(val);
    }
    void POP()
    {
        if (l.getSize() == 0)
        {
            cout << "Stack is already empty!!\n";
            return;
        }

        l.deleteAtHead();
    }
    T TOP()
    {
        if (l.getSize() == 0)
        {
            cout << "Stack is empty!!\n";

            return -1;
        }
        return l.head->data;
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
    st.POP();
    st.POP();
    cout << st.TOP() << "\n";

    return 0;
}