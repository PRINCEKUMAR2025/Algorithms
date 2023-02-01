#include<iostream>
#include<math.h>
using namespace std;
int main(){
    const int num=10;
    int a=10;
    cout<<"hello world\n";
    cout<<a;
    string name;
    cin>>name;
    cout<<name;
    for (int i = 0; i <5; i++)
    {
       cout<<"hello world";
    } 
    int i=0;
    while (i<5)
    {
        cout<<"hello world";
        i++;
    }
    int i=0;
    do
    {
    cout<<"hello world\n";
    i++;
    } while (i<2);
    string str;
    cin>>str;
    cout<<"your name is "<<str;
    cout<<"\n"<<str.length();
    cout<<str[2];
    cout<<sqrt(4);
    int x=10,y=9;
    cout<<(x>y);
    string arr[10]={"prince","kumar","navin","krish"};
    cout<<arr[8];
    string str[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i <5; i++)
    {
        cout<<"\n"<<str[i];
    }
    
    
}
