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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
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
        sz++;
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

    int getSize()
    {
        return sz;
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }
        if(index == 0)
        {
            insert_at_head(value);
            return;
        }
        sz++;
        node *a = head;
        int curr_index = 0;
        while(curr_index != index-1)
        {
            a =a->next;
            curr_index++;
        }
        node *newNode = create_new_node(value);
        newNode->next = a->next;
        a->next = newNode;

    }

    void deleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->next;
        delete a;

    }

    void deleteAtAnyIndex(int index)
    {
        if(index < 0 || index > sz-1)
        {
            return;
        }
        if(index==0)
        {
            deleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->next;
            cur_index++;

        }

        node *b = a->next;
        a->next = b->next;
        delete b;

    }

};
int main()
{
    LinkedList l;
    l.insert_at_head(10);
    l.insert_at_head(30);
    l.insert_at_head(20);
    l.insert_at_head(30);
    cout<<"Before insert element : ";
    l.Traversing();
    cout<<"Size "<<l.getSize()<<"\n";
    l.InsertAtAnyIndex(2,100);
    cout<<"After Insering element ";
    l.Traversing();
    cout<<"Size "<<l.getSize()<<"\n";

    l.deleteAtHead();
    l.Traversing();
    cout<<"Size "<<l.getSize()<<"\n";

    l.deleteAtAnyIndex(2);
    l.Traversing();
    cout<<"Size "<<l.getSize()<<"\n";

    return 0;
}





