#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nxt;
    Node *prev;
    Node(int value)
    {
        data = value;
        nxt = NULL;
        prev = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;
    int sz;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
        sz = 0;
    }
    void PUSH(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = top = newNode;
        }
        top->nxt = newNode;
        newNode->prev = top;
        top = newNode;
    }
    void POP()
    {
        Node *delNode = top;
        if (head == top)
            head = top = NULL;
        else
        {
            top = delNode->prev;
            top->nxt = NULL;
        }
        delete delNode;
        sz--;
    }

    bool EMPTY()
    {
        if (sz == 0)
            return true;
        return false;
    }

    int SIZE()
    {
        return sz;
    }
    int TOP()
    {
        return top->data;
    }
};
