#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,3,3,3,3,3,3,3};
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j<5; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }break;
            
        }
        
    }
    // return count;
    cout<<count;
    
}