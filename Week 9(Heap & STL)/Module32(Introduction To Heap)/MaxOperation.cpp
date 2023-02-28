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

    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if (l < nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if (r < nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if (largest == idx)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }
    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    int getMax()
    {
        if (nodes.empty())
            return -1;
        return nodes[0];
    }

    int ExtractMax()
    {
        if (nodes.empty())
            return -1;
        int ret = nodes[0];
        Delete(0);
        return ret;
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

    hp.Delete(0);
    hp.printHeap();
    return 0;
}