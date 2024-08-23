#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    //5! = 1x2x3x4x5
    int product = 1;
    for(int i=1; i<=n; i++){
        product = product*i;
    }
    printf("The fectorial is : %d",product);
    return 0;

}