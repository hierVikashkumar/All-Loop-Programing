#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",n);
    int a = 0;
    for(int i = 2; i<=n-1; i++){
        if(i==0){
            a = 1;
            break;
        }
    }
    if(n==1) 
        printf("1 is neither positive nor negative");
        else if(a==0)
        printf("the given number is prime\n");
        else
        printf("the given number is composite\n");   
    return 0;
}