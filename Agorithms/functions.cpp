#include<iostream>
using namespace std;
void fun(){
    string name;
    cin>>name;
    int id;
    cin>>id;
    int acadyear;
    cin>>acadyear;
}

//with parameters
void cube(int x){
    // cin>>x;
    cout<<x*x*x;
}

//multiple parameters
void mul(int x,int y){
    cout<<x*y;
}

// passing an array in function
void arrpass(int arr[5]){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
}

//functionoverloading
void over(string id){
    cout<<id;
}
void over(string id,string name){
    cout<<id<<"\n"<<name;
}

void over(int a,int b){
    cout<<a/b;
}

int main(){
    // fun();
    int arr[5]={1,2,3,4,5};
    arrpass(arr);
    cube(2);
    mul(2,3);
    over("21bce5326");
    over("21bce5326","prince");
    over(2,1);
}