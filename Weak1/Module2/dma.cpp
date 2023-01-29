#include<bits/stdc++.h>
using namespace std;
int main()
{

    int *ptr = new int[10] {2,23,2,2,5,3,2,7,23,75};
    for(int i = 0 ; i<10; i++)
        cout<<ptr[i]<<" ";
    delete ptr;
    return 0;
}
