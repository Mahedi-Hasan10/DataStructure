#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    for(int i = 0 ; i <n; i++)
    {
        for(int j = n; j<1; j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}
int main()
{
    fun(3);
    return 0;
}
