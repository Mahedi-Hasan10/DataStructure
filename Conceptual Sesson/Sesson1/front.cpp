//front() *access first element from the vector

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
    for(int i = 0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<"\n";

    int first_element = v.front();
    cout<<first_element<<"\n";
    return 0;

}

