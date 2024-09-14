#include<stdio.h>
int main(){
    float x;
    printf("Enter the Sale amount: ");
    scanf("%f",&x);
    if(x<500){
        printf("The Comission Amount is: Rs.35");
    }
    float j;
    if(x>=500&&x<=2000){
        j=(10*x)/100;
        printf("The Comission Amount is: %f",j);
    }
    if (x>=2001&&x<=5000){
        j=(15*x)/100;
        printf("The Comission Amount is: %f",j);
    }
    if(x>5000){
        j=(20*x)/100;
        printf("The Comission Amount is: %f",j);
    }
    return 0;
}