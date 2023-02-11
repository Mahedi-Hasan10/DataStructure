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
    node *prev;
};
template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // create a new node
    node<T> *create_new_node(T value)
    {
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
    // create a new node and insert it in head
    void insert_at_head(T value)
    {
        sz++;
        node<T> *newNode = create_new_node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        node<T> *a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->next;
        delete a;
        if (b != NULL)
        {
            b->prev = NULL;
        }
        head = b;
        sz--;
    }

    // return the size of the linked list
    int getSize()
    {
        return sz;
    }
};

// create a stack using doubly linked list
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {
    }

    void Push(T value)
    {
        dl.insert_at_head(value);
    }

    void Pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty\n";
            return;
        }
        dl.deleteAtHead();
    }
    T Top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    T get_size()
    {
        return dl.getSize();
    }
};
int main()
{
    Stack<int> st;
    st.Push(5);
    st.Push(2);
    st.Push(7);
    st.Push(8);
    st.Push(3);
    Stack<int> tmp;
    while (st.get_size() > 0)
    {
        int t = st.Top();
        st.Pop();
        tmp.Push(t);
    }
    swap(st, tmp);
    while (st.get_size() > 0)
    {
        cout << st.Top() << "\n";
        st.Pop();
    }
    return 0;
}