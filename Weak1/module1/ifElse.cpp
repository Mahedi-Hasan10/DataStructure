#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
        int marks;
        cin>>marks;
        if(marks>=80 && marks<=100)
            cout<<"A+\n";
        else if(marks>=70)
            cout<<"A\n";
        else if(marks>=60)
            cout<<"A_\n";
        else
            cout<<"Failed\n";
    */

    int day;
    cout<<"Enter a date between one to seven :\n";
    cin>>day;
    switch(day)
    {
    case 1:
        cout<<"Saturday\n";
        break;
    case 2:
        cout<<"Sunday\n";
        break;
    case 3:
        cout<<"Monday\n";
        break;

    case 4:
        cout<<"Tuesday\n";
        break;
    case 5:
        cout<<"Wednesday\n";
        break;
    case 6:
        cout<<"Thursday\n";
        break;

cout:
    case 7:
        cout<<"Friday and weekends\n";
        break;

    default:
        cout<<"Invalid date!!\n";
    }
    return 0;
}
