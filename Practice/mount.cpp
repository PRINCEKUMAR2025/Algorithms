#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int mount[n];
    for(int i=0;i<n;i++) {
        cin>>mount[i];
    }

    for(int i=0;i<n;i++) {
        int key = mount[i];
        int prev = mount[i-1];
        int next = mount[i+1];

        if(key>prev){
            if(key>next){
                cout<<key;
            }
        }
    }
    return 0;
}