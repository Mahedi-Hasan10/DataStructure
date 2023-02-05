#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<pair<pair<string, string>, int>> v;
    for (int i = 0; i < n; i++)
    {
        string fullname, nickname;
        int age;
        cin >> fullname >> nickname;
        cin >> age;
        v.push_back({{fullname, nickname}, age});
    }
    cout << "---------Student Info---------\n";
    cout << "--Firstname--Nickname--Age--\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first.first << "------" << v[i].first.second << "------" << v[i].second;
        cout << "\n";
    }

    return 0;
}