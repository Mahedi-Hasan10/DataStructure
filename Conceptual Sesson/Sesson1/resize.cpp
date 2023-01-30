//resize() *resize element of the array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0 ; i<n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    v.resize(10,1);
    int sz = v.size();
    for(int i = 0;i<sz;i++)
    cout<<v[i]<<" ";
    return 0;

}
