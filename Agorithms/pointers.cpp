#include<iostream>
using namespace std;

    int main(){
        int a=10;
        int *ptra=&a;

        cout<<ptra<<"\n";
        cout<<*ptra;

        //changing value without disturbing variable through pointers

        *ptra=20;
        cout<<"\n"<<*ptra;
    }
