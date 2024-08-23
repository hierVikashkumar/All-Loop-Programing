#include <stdio.h>
int main(){
    float cp;
    printf("Enter cost price :");
    scanf("%f",&cp);
    int sp;
    printf("Enter selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if(sp==cp){
        printf("No loss, no profit");
    }
    return 0;
}