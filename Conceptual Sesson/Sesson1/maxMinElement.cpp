//sort()
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
    int maxx = *max_element(v.begin(), v.end());
    int minn = *min_element(v.begin(), v.end());
    cout<<"Maximum = "<<maxx<<"\nMinimum = "<<minn<<endl;
    return 0;

}
/*
5
23 12 42 9 11

*/

