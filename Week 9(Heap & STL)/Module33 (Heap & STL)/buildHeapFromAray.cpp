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

    void build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = nodes.size();
        int lastnode = n / 2 - 1;
        for (int i = lastnode; i >= 0; i--)
        {
            down_heapify(i);
        }
    }
};
int main()
{
    Heap hp;
    vector<int> a = {1, 2, 3, 4, 10, 9, 8, 7};
    hp.build_from_array(a);
    hp.printHeap();
    return 0;
}