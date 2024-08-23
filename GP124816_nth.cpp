#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // 2 4 8 16 32 .......n terms
    // int a = 1;
    // for(int i=1; i<=n; i++){
    //     cout<<a<<endl;
    //     a = a * 2;
    // }

    // 2 6 18 54.....n terms
    int a = 2;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a * 3;
    }
}