#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // n , n-1, n-2, ....  3 , 2 , 1
    for(int i=n; i>=1; i-=3){
        cout<<i<<endl;
    }
}