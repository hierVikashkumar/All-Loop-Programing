#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=2; i<=n; i++){
        if(i%i==0){
            printf("the given number is composite\n");
            break;
        }
    }
    return 0;

}