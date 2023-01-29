//push_back();
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;

    for(int i = 0; i<=n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    int sz = v.size();

    for(int i=0; i<sz; i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
