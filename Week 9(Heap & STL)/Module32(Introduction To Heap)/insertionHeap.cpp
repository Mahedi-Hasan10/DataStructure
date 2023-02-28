/*
     Author : Mahedi-Hasan10
     Date : 28-02-2023
*/
#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    vector<int> nodes;
    Heap()
    {
    }

    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    void printHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    Heap hp;
    hp.insert(10);
    hp.insert(5);
    hp.insert(7);
    hp.insert(3);
    hp.insert(8);
    hp.insert(7);
    hp.insert(9);
    hp.insert(50);
    hp.printHeap();
    return 0;
}