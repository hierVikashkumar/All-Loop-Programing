#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // 100 97 94 91 .......7 4 1 --> 34 terms
    // for(int i=n; i>=1; i-=3){
    //     cout<<i<<endl;
    // }

    // int a = 100;
    // for(int i=1; i<=34; i++){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }

    // int a = 100;
    // for(int i=1; a>0; i++){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }


    for(int i=100; i>0; i=i-3){
        cout<<i<<endl;
    }
}