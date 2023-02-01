#include<iostream>
using namespace std;
struct person
{
    string name;
    long long int phnnum;
    string adress;
    int age;
};

    int main(){
        person p1;
        p1.name="prince";
        p1.phnnum=7481050951;
        p1.adress="munger bihar";
        p1.age=20;

        cout<<"this is "<<p1.name<<"\n"<<"his phone number is "<<p1.phnnum<<"\n"<<"he lives in "<<p1.adress<<"\n"<<"he is "<<p1.age<< "years old";

        person p2;
        p2.name="mummy";
        p2.phnnum=9931238388;
        p2.adress="munger bihar";
        p2.age=35;
        cout<<"\n";
        cout<<"this is "<<p2.name<<"\n"<<"his phone number is "<<p2.phnnum<<"\n"<<"he lives in "<<p2.adress<<"\n"<<"he is "<<p2.age<< "years old";
        
        
        cout<<&p1;  //to get memory location where you have stored
    }
