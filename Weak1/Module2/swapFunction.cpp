#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[] = {2,4,1,5,6}, n = 5;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(ara[i] > ara[j])
            {
                swap(ara[i],ara[j]);
            }
        }
    }

    for(int i = 0; i<n; i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    int a = 10;
    int b = 100;
    swap(a,b);

    cout<<a<<" "<<b;
    return 0;
}
