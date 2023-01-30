//clear() clear all element from vector
//empty() this function tell us the vector is empty or not, if its not it give us 0, else it give us 1

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
    if(v.empty()==0)
    cout<<"Not empty\n";
    else
    cout<<"Empty\n";
    cout<<"After using clear function\n";
    v.clear();
    if(v.empty()==0)
    cout<<"Not empty\n";
    else
    cout<<"Empty\n";
    return 0;

}

