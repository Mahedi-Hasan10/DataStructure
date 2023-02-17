/*
     Author : Mahedi-Hasan10
     Date : 17-02-2023
*/
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prev;
};

class Deque
{
public:
    node *head;
    node *tail;
    int sz;
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    node *createNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void InsertAtTail(int value)
    {
        node *newnode = createNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prev = tail;
        tail = newnode;
        sz++;
    }
    void InsertAtHead(int value)
    {
        node *newnode = createNode(value);
        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        newnode->nxt = head;
        head->prev = newnode;
        head = newnode;
        sz++;
    }
    void push_back(int value)
    {
        if (rev == 0)
        {
            InsertAtTail(value);
        }
        else
        {
            InsertAtHead(value);
        }
    }

    void push_front(int value)
    {
        if (rev == 0)
        {
            InsertAtHead(value);
        }
        else
        {
            InsertAtTail(value);
        }
    }

    void DeleteLast()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = tail;
        tail = a->prev;
        delete a;
        tail->nxt = NULL;
        sz--;
    }

    void DeleteHead()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            return;
        }
        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = head;
        head = head->nxt;
        delete a;
        head->prev = NULL;
        sz--;
    }

    void pop_back()
    {
        if (rev == 0)
        {
            DeleteLast();
        }
        else
        {
            DeleteHead();
        }
    }

    void pop_front()
    {
        if (rev == 0)
        {
            DeleteHead();
        }
        else
        {
            DeleteLast();
        }
    }
    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        if (rev == 0)
        {
            return head->data;
        }
        else
        {
            return tail->data;
        }
    }
    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        if (rev == 0)
        {
            return tail->data;
        }
        else
        {
            return head->data;
        }
    }

    void Reverse_deque()
    {
        if (rev == 0)
            rev = 1;
        else
            rev = 0;
    }
};
int main()
{
    Deque dl;
    dl.push_front(5);
    cout << dl.front() << "\n";
    dl.push_front(6);
    cout << dl.front() << "\n";
    dl.push_front(7);
    cout << dl.back() << "\n";
    dl.pop_back();
    cout << dl.front();
    return 0;
}