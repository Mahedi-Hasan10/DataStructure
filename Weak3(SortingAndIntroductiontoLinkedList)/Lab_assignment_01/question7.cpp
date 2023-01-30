#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+b);
    for(int i = 0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}

