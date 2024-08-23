#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    printf("Enter 4th number : ");
    scanf("%d",&d);
    printf("Enter 5th number : ");
    scanf("%d",&e);

    if(a>b && a>c && a>d && a>e){
        printf("%d is greater", a);
    }
    if(b>a && b>c && b>d && b>e){
        printf("%d is greater", b);
    }
    if(c>b && c>a && c>d && c>e){
        printf("%d is greater", c);
    }
    if(d>b && d>c && d>a && d>e){
        printf("%d is greater", d);
    }
    if(e>b && e>c && e>d && e>a){
        printf("%d is greater", e);
    }
    return 0;
}