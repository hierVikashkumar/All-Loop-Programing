#include<iostream>
using namespace std;
int main(){

    //Loop is 19 to 190 bar run kar rha hai 
    // for(int i=19; i<=190; i++){
    //     if(i%19 == 0){
    //         cout<<i<<endl;
    //     }
    // }

    // Loop 10 bar hi chalna chahiye    ----> best Loop

    for(int i=19; i<=190; i=i+19){
        cout<<i<<endl;
    }
}