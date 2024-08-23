#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    // 1,2,4,8,16,...
    // int a =1;
    // for(int i=1; i<=n; i++){
    //     printf("%d ",a);
    //     a = a * 2;
    // }

    // 4,12,48,192,....
    int a = 3;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a = a * 4;
    }
    return 0;
}