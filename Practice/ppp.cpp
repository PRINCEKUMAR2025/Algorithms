#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<"X   "<<x<<endl<<"Y   "<<y<<endl;
    cout<<min(x,y);
}