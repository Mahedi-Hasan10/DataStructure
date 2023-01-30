#include<bits/stdc++.h>
using namespace std;
vector<int> even_generator(vector<int> v)
{
    vector<int>new_vector;

    for(int i = 0; i<5; i++)
    {
        if(v[i]%2==0)
            new_vector.push_back(v[i]);
    }
    return new_vector;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> ans = even_generator(v);
    for(int i = 0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
