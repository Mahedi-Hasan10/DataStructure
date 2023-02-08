/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;

int get_max(vector<int> v, int n)
{
    if (n == 1)
        return v[0];

    return max(v[n - 1], get_max(v, n - 1));
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }
    int maxx = get_max(v, n);
    cout << maxx << "\n";
    return 0;
}