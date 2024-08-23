#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int a = 0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            // printf("the given number is composite\n");
            a = 1;
            // break;
        }
    }
    return 0;

}