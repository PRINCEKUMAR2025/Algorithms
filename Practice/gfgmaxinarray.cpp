#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];

    for (int i = 0+1; i < n; i++)
    {
       if (arr[i]>max)
       {
         max=arr[i];
        //  cout<<i;
         cout<<max;
       }
       else
       cout<<arr[0];
        
    }
    
}