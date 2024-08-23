#include<stdio.h>
int main(){
    int l;
    printf("Enter the length : ");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth : ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2 * (l + b);
    if(a>b){
        printf("Area is greter than parameter");
    }
    else{
        printf("Area is not greter than parameter");
    }
    return 0;
}