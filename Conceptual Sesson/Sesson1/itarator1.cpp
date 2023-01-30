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

    //vector<int> ::iterator it;
    // for(it=v.begin(); it!=v.end(); it++)
    //   cout<<*it<<" ";


    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;

}

