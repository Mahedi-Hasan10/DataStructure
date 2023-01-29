#include<bits/stdc++.h>
using namespace std;
int main()
{
   // int a =10;
    //int b = 23;
    //int maxx = max(a,b);
    //int minn = min(a,b);
    //cout<<"Maximum is "<<maxx<<endl<<"Minimum is "<<minn<<endl;

    int ara[] = {5,1,2,4,3};
    int mn = ara[0];
    for(int i=1;i<5;i++)
        mn = min(mn, ara[i]);

    int mx = ara[0];
    for(int i = 1;i<5;i++)
    mx = max(mx,ara[i]);

    cout<<"max = "<<mx<<endl;
    cout<<"min = "<<mn<<endl;
    return 0;
}

