/*
     Author : Mahedi-Hasan10
     Date : 24-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    int value;
    node *left;
    node *right;
    node *parent;
};

class BinaryTree
{
public:
    node *root;
    BinaryTree()
    {
        root = NULL;
    }

    node *createNewNode(int id, int value)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insertion(int id, int value)
    {
        node *newnode = createNewNode(id, value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }

        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if (a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    void Search(node *a, int value)
    {
        if (a == NULL)
            return;
        if (a->value == value)
        {
            cout << a->id << " ";
        }
        Search(a->left, value);
        Search(a->right, value);
    }

    void BFS()
    {
        if (root == NULL)
            return;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int l = -1, r = -1, p = -1;
            if (a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            if (a->parent != NULL)
                p = a->parent->id;

            cout << "Node id -> " << a->id << " Left child -> " << l << " Right child -> " << r
                 << " Parent -> " << p << "\n";
        }
    }

    void Inorder(node *a)
    {
        if (a == NULL)
            return;
        Inorder(a->left);
        cout << a->id << " ";
        Inorder(a->right);
    }

    void PreOrder(node *a)
    {
        if (a == NULL)
            return;
        cout << a->id << " ";
        PreOrder(a->left);
        PreOrder(a->right);
    }

    void PostOrder(node *a)
    {
        if (a == NULL)
            return;
        PostOrder(a->left);
        PostOrder(a->right);
        cout << a->id << " ";
    }
};
int main()
{
    BinaryTree bt;
    bt.Insertion(1, 10);
    bt.Insertion(2, 30);
    bt.Insertion(3, 40);
    bt.Insertion(4, 40);
    bt.Insertion(5, 70);
    bt.Insertion(6, 77);

    bt.BFS();
    return 0;
}