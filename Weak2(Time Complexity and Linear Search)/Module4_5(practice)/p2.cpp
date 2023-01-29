#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int summ = 1;
    for(int i =0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {
        if(i%2!=0)
            summ = summ*i;
    }
    cout<<summ<<"\n";
    return 0;
}
/*
WAP that takes n integer numbers, and multiply all the numbers in the odd indexed position. Indexing starts from 0.

Sample input
                        Sample output
5
1  2  3  4  5                 8

6
5 6 7 8 0 1                   48





*/

