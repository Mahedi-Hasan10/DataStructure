#include<bits/stdc++.h>
using namespace std;

class Rectengle
{
public:
    int height;
    int weight;

    int calculate_area()
    {
        return height*weight;
    }
    int calculate_parameter()
    {
        return 2*(height+weight);
    }
};


int main()
{
    Rectengle r1;
    r1.height = 2;
    r1.weight = 3;

    cout<<r1.calculate_area()<<endl;
    cout<<r1.calculate_parameter()<<endl;

    return 0;
}
