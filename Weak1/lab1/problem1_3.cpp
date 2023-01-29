#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    Person *father,*mother;
    void print_info()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Fathers Name = "<<father->name<<endl;
        cout<<"Fathers Name = "<<mother->name<<endl;

    }
};

int main()
{
    Person p1;
    p1.father = new Person;
    p1.mother = new Person;
    p1.name = "Mahedi";
    p1.father->name = "Fochiar";
    p1.mother->name = "Mariam";
    p1.print_info();
    return 0;
}


