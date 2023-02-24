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

    node *createNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void buil_tree()
    {
        node *allnode[7];
        for (int i = 0; i < 7; i++)
            allnode[i] = createNewNode(i);

        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->parent = allnode[0];
        allnode[2]->parent = allnode[0];

        allnode[1]->left = allnode[5];
        allnode[1]->right = allnode[6];

        allnode[5]->parent = allnode[1];
        allnode[6]->parent = allnode[1];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
        root = allnode[0];
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

            cout << "Node id = " << a->id << " left = " << l << " Right = " << r << " Parent = " << p << "\n";
        }
    }
};
int main()
{
    BinaryTree bt;
    bt.buil_tree();
    bt.BFS();
    return 0;
}