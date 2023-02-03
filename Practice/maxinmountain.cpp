#include<iostream>
using namespace std;

int max(int arr[]){
    int max;
    int index;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; i < 5; j++)
        {
            if (arr[i]>arr[j])
            {
                max=arr[i];
                index=i;
            }
            else if(arr[j]>arr[i]){
            max=arr[j];
            index=j;
            }
            // break;
        }
        
    }return index;
    
}

// int Max(int arr[]){
//     int max=arr[0];
//     for (int i = 0; i < 10; i++)
//     {
//        if(arr[i]>arr[0])
//        {
//         max=arr[i];
//        }
//        else{
//         max=arr[0];
//        }

//     return max;
//     //    else{
//     //     max=arr[0];
//     //     }
//     }
// }
    // return max;
int main(){
    int arr[5]={3 ,2, 1, 2, 2};
    int a=max(arr);
    cout<<a;
    }
