#include<stdio.h>
int mai(){
    int a, b;
    // int b;
    // int c;

    printf("Enter the number of a :");
    scanf("%d",&a);
    printf("Enter the number of b :");
    scanf("%d",&b);
    // printf("Enter the number of c :");
    // scanf("%d",&c);
    if(a>b){
        printf(" a is greater than\n");
    }
    else{
        printf(" b is greater than\n");
    }
    //    if(c>a, c>b){
    //     printf("%d c is greater than\n");
    // }
    return 0;
}