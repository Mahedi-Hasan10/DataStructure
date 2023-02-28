/*
     Author : Mahedi-Hasan10
     Date : 25-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *left;
    node *right;
};

class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }

    node *createNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    void BST_INSERT(int value)
    {
        node *newnode = createNewNode(value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }

        node *cur = root;
        node *prev = NULL;
        while (cur != NULL)
        {
            prev = cur;
            if (newnode->value > cur->value)
            {
                cur = cur->right;
            }
            else
            {
                cur = cur->left;
            }
        }

        if (newnode->value > prev->value)
        {
            prev->right = newnode;
        }
        else
        {
            prev->left = newnode;
        }
    }

    void BFS()
    {
        if (root == NULL)
        {
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            int l = -1, r = -1, p = -1;
            if (a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }
            cout << "Node Value = " << a->value << " left = " << l << " Right = " << r << "\n";
        }
    }
};
int main()
{
    BST bst;
    bst.BST_INSERT(8);
    bst.BST_INSERT(6);
    bst.BST_INSERT(11);
    bst.BST_INSERT(4);
    bst.BST_INSERT(7);
    bst.BST_INSERT(9);
    bst.BST_INSERT(13);
    bst.BST_INSERT(7);

    bst.BFS();
    return 0;
}