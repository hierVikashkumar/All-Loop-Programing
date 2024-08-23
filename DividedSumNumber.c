#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    //1 - 2 + 3 - 4 + 5 - 6 + .......n terms
    //odd number -> add
    //even number -> subtract
    int sum = 0;
    for(int i=1; i<=n; i++){
       if(i%2!=0) sum +=i;
       else sum -=i;
    }
    printf("The sum is : %d",sum);
    return 0;

}