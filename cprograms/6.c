#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("Enter a real number: ");
    scanf("%f",&x);
    if(x<0){
        y=sin(1/x);
        printf("Value of sin(1/%f): %f",x,y);
    }
    if(x>=0){
        printf("NOT POSSIBLE");
    }
    return 0;
}