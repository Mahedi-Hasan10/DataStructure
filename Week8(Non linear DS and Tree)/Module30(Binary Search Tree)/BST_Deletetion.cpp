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

    void DELETE(int value)
    {
        node *cur = root;
        node *prv = NULL;
        while (cur != NULL)
        {
            if (value > cur->value)
            {
                prv = cur;
                cur = cur->right;
            }
            else if (value < cur->value)
            {
                prv = cur;
                cur = cur->left;
            }
            else
            {
                break;
            }
        }
        if (cur == NULL)
        {
            cout << "Value is not present in this BST\n";
            return;
        }

        // Case 1 : here both left child and right child are null
        if (cur->left == NULL and cur->right == NULL)
        {
            if (prv->left != NULL && cur->value == prv->left->value)
            {
                prv->left = NULL;
            }
            else
            {
                prv->right = NULL;
            }
            delete cur;
            return;
        }
        // case 2 : cur node has only one child
        else if (cur->left == NULL and cur->right != NULL)
        {
            if (prv->left != NULL && prv->left->value == cur->value)
            {
                prv->left = cur->right;
            }
            else
            {
                prv->right = cur->right;
            }
            delete cur;
            return;
        }

        else if (cur->left != NULL and cur->right == NULL)
        {
            if (prv->left != NULL && prv->left->value == cur->value)
            {
                prv->left = cur->left;
            }
            else
            {
                prv->right = cur->left;
            }
            delete cur;
            return;
        }

        // Case 3 : parent has both child
        node *tmp = cur->right;
        while (tmp->left != NULL)
        {
            tmp = tmp->left;
        }

        int saved = tmp->value;
        DELETE(saved);
        cur->value = saved;
    }
};
int main()
{
    BST bst;
    bst.BST_INSERT(6);
    bst.BST_INSERT(4);
    bst.BST_INSERT(3);
    bst.BST_INSERT(5);
    bst.BST_INSERT(7);
    bst.BST_INSERT(8);

    bst.DELETE(6);
    cout << "\n\n";
    bst.BFS();
    return 0;
}