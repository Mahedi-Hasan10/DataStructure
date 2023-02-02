#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(100);
    for(auto it = l.begin() ; it != l.end();it++)
        cout<< *it<<" ";
    return 0;
}