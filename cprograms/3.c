#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side of the triangle: ");
    scanf("%d",&a);
    printf("Enter second side of the triangle: ");
    scanf("%d",&b);
    printf("Enter third side of the triangle: ");
    scanf("%d",&c);
    if(a==b&&b==c&&a==c){
        printf("The given triangle is an EQUILATERAL TRIANGLE");
    }
    if(a==b&&b!=c||a!=b&&b==c||a!=b&&a==c){
        printf("The given triangle is an ISOSCELES TRIANGLE");
    }
    if(a!=b&&b!=c&&a!=c){
        printf("The given triangle is a SCALEN TRIANGLE");
    }
    return 0;
}