#include<stdio.h>
int main (){
    // int x = 3,y,z;
    // y = x = 10;
    // z == 10;
    // printf("\nx = %d, y = %d, z = %d",x,y,z);
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i=i+3){
        printf("%d ",i);
    }
    return 0;
}