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
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *createNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void push_back(int value)
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

    void push_front(int value)
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

    void pop_back()
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

    void pop_front()
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
    int front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        return head->data;
    }
    int back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        return tail->data;
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