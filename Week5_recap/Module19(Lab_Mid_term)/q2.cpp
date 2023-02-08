/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> v, int n)
{

    if (n <= 1)
        return v;
    vector<int> tmp;
    int idx = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[i + 1])
        {
            tmp.push_back(v[i]);
        }
    }
    v.clear();
    for (int i = 0; i < tmp.size(); i++)
    {
        v.push_back(tmp[i]);
    }
    return v;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> ans = removeDuplicate(v, v.size());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
    return 0;
}
