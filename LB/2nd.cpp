#include<iostream>
using namespace std;

// void numtype(){
//     int a;
//     cin>>a;
//     if (a>0)
//     {
//         cout<<"+ve";
//     }
//     else if (a==0)
//     {
//         cout<<"you entered 0";
//     }
//     else
//     cout<<"-ve";
// }
// void evensum(){
//     int n;
//     cin>>n;
//     int i=2;
//     int sum=0;
//     while (i<n)
//     {
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<sum;
    
// }
void prime(){
   int n;
    cin>>n;
    int i=2;
    while (i<n)
    {
      if (n%i==0)
      {
        cout<<"not prime"<<endl;
      }
      else{
      cout<<"prime"<<endl;
      }
      i++;
    }
     
}
int main(){
    // int a,b;
    // cin>>a;
    // cin>>b;
    // if (a>b)
    // {
    //     cout<<a<<" is greater";
    // }
    // else
    // cout<<b<<" is greater";
    // numtype();
    // evensum();
    prime();
    
}