#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The given number is EVEN");
    }
    else{
        printf("The given number is ODD");
    }
    return 0;
}