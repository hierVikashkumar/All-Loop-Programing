#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    //100,97,94,91,....
    int a = 100;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a =a -3;
    }
    return 0;
}