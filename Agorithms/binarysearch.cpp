#include<iostream>
using namespace std;

int bin(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<= end)
    {
    
    if (arr[mid]==key)
    {
        return mid;
    }
   if(key>arr[mid])
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    int mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arry[10]={0,1,2,3,4,5,6,7,8,9};
    int a=bin(arry,10,7);
    cout<<a<<endl;
}