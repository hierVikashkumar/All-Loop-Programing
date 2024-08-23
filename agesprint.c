#include<stdio.h>
int main(){
    // int n;  
    // printf("Enter the number :");
    // scanf("%d",&n);
    // if(n%2==0){
    //     printf("even number");
    // }
    // else{
    //     printf("odd number");
    // }
    int time;
    printf("Enter the time :");
    scanf("%d",&time);
    if(time <10){
        printf("good time");
    }
    else if(time <20){
        printf("bad time");
    }
    else{
        printf("best time");
    }
    return 0;
}