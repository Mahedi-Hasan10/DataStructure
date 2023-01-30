#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* next;
    node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

class LinkedList
{
    node * head;
    LinkedList(int value)
    {
        head = NULL;
    }

    void InsertAtHHead(int value)
    {

    }
    void Traversing()
    {

    }
    void SearchASingleElement()
    {

    }
    void SearchAllElement()
    {


    }


};
int main()
{
    LinkedList l;
    l.InsertAtHHead(10);
    l.InsertAtHHead(30);
    l.InsertAtHHead(20);
    l.InsertAtHHead(30);



    return 0;
}
