#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(10);

    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);

    v[1].push_back(30);
    v[1].push_back(30);
    cout << v[0][1];
    return 0;
}