#include<iostream>
using namespace std;
int main(){
    int key=2;
    int arr[10]={1,4,3,6,2,9,6,5,0,8};

    for (int i = 0; i < 10; i++)
    {
        if (key==arr[i])
        {
            cout<<i;
        }
        
    }
}