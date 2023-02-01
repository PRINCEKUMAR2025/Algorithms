#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number";
    cin>>n;
    int arr[100];
    int i =0;
    while(n!=0){
       int digit = n%10;
       arr[i] = digit;
       i++;
       n/=10; 
    }
    for(int j = 0;j<i;j++){
        cout<<arr[j];
    }
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout<<"\n"<<arr[i];
    // // }
    // for (int i = n-1;i>=0; i--)
    // {
    //     cout<<"\n"<<arr[i];
    // }   
}