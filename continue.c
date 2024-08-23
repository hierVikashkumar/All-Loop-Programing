#include<stdio.h>
int main (){
    // int n;
    // printf("Enter the number : ");
    // scanf("%d",&n);
    for(int i=1; i<=100; i++){
        if(i % 2==0){
            continue;
            //  printf("%d ",i);
        }
         printf("%d ",i);
    }
     
    return 0;
}