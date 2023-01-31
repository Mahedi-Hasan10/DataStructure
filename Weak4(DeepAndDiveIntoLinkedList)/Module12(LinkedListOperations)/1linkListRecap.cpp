#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};

class LinkedList
{
public:
    node* head;
    LinkedList()
    {
        head = NULL;
    }

    node* create_new_node(int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insert_at_head(int value)
    {
        node* a = create_new_node(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    void Traversing()
    {
        node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";

    }

    int Search_distinct_value(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                return index;

            }
            a= a->next;
            index++;
        }

        return -1;
    }

    void search_all_possible_occur(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is found at "<<index<<"\n";
            }
            a= a->next;
            index++;
        }
    }


};
int main()
{
    LinkedList l;
    l.insert_at_head(10);
    l.insert_at_head(30);
    l.insert_at_head(20);
    l.insert_at_head(30);
    l.Traversing();


    return 0;
}


