/*
     Author : Mahedi-Hasan10
     Date : 08-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        dq.push_back(in);
    }
    while (!dq.empty())
    {
        if (dq.front() <= dq.back())
        {
            a.push_back(dq.front());
            dq.pop_front();
        }
        else
        {
            a.push_back(dq.back());
            dq.pop_back();
        }
    }

    for (int i = 0; i < n; i++)
    {
        dq.push_back(a[i]);
    }
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}