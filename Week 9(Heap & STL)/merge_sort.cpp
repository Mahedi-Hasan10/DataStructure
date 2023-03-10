/*
     Author : Mahedi-Hasan10
     Date : 04-03-2023
*/
#include <bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string> v)
{
    if (v.size() <= 1)
    {
        return v;
    }
    int mid = v.size() / 2;
    vector<string> left;
    vector<string> right;

    for (int i = 0; i < mid; i++)
    {
        left.push_back(v[i]);
    }
    for (int i = mid; i < v.size(); i++)
    {
        right.push_back(v[i]);
    }

    vector<string> sorted_left = merge_sort(left);
    vector<string> sorted_right = merge_sort(right);
    vector<string> sorted_ans;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (idx1 == sorted_left.size())
        {
            sorted_ans.push_back(sorted_right[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_right.size())
        {
            sorted_ans.push_back(sorted_left[idx1]);
            idx1++;
        }
        else if (sorted_left[idx1] < sorted_right[idx2])
        {
            sorted_ans.push_back(sorted_left[idx1]);
            idx1++;
        }
        else
        {
            sorted_ans.push_back(sorted_right[idx2]);
            idx2++;
        }
    }
    return sorted_ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    vector<string> ans = merge_sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}