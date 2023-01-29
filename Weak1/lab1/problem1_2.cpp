#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;

    }
};


int main()
{
    Student s;
    s.name = "Mahedi";
    s.std_id = 438820;
    s.age = 20;
    s.fathers_name = "Fochiar";
    s.mothers_name = "Mariam";

    s.print_information();


    Student s2;
    s2.name = "Imran";
    s2.std_id = 438882;
    s2.age = 23;
    s2.fathers_name = "Not know";
    s2.mothers_name = "Not know";

    s2.print_information();
    return 0;
}

