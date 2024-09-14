#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
     if(x%y==0){
        z=x/y;
        printf("OUTPUT: %d",z);
     }
     if(x%y!=0){
        printf("Division not possible");
     }
    return 0;
}