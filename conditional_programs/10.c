#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first angle: ");
    scanf("%d",&a);
     printf("Enter second angle: ");
    scanf("%d",&b);
     printf("Enter third angle: ");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("The Triangle is Valid");
    }
    else{
        printf("The Triangle is not Valid");
    }
    return 0;
}