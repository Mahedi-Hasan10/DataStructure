/*
     Author : Mahedi-Hasan10
     Date : 10-02-2023
     Time : 11-48-56
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

    T getSize()
    {
        return dl.getSize();
    }
};
int main()
{
    Stack<int> a;
    Stack<int> tmp;
    a.Push(7);
    a.Push(3);
    a.Push(4);
    a.Push(8);
    while (a.getSize() > 0)
    {
        tmp.Push(a.Top());
        a.Pop();
    }
    swap(a, tmp);
    cout << "After Reverse : ";
    while (a.getSize() > 0)
    {
        cout << a.Top() << " ";
        a.Pop();
    }
    cout << "\n";

    return 0;
}