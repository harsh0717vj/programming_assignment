#include<stdio.h>
int min(int a,int b){
    if(a>b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            hcf=i;
        }
    }
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("The Highest Common Factor of %d and %d is: %d",a,b,hcf);
    return 0;
}