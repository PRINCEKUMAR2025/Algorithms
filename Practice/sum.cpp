#include<iostream>
using namespace std;

int sum(int *arr,int n){
    // base case
    if(n == 0){
        return 0;
    }
    return arr[0] + sum(arr+1,n-1);
}
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n *fact(n-1);

}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sa = fib(n-1) +fib(n-2);
    return sa;   
}

int main(){
    // int n;
    // cin>>n;
    // int * arr = new int[n];
    // for(int i =0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<fib(9)<<endl;
    // int sum = 0;
    // for(int i =0 ;i<n;i++){
    //     sum += arr[i];
    // }
    // cout<<sum;
    // cout<<sum(arr,n);
}