//pop_back() *delete last element*
//size()     *check size of vector
//back()     *store last element

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
    int sz = v.size();
    for(int i = 0; i<sz; i++)
        cout<<v[i]<<" ";
    cout<<"\n";


    int last_element = v.back();
    cout<<last_element<<endl;
    v.pop_back();

    sz = v.size();
    for(int i = 0; i<sz; i++)
        cout<<v[i]<<" ";
    cout<<"\n";


    v.push_back(last_element);
    sz = v.size();
    for(int i = 0; i<sz; i++)
        cout<<v[i]<<" ";
    return 0;

}

