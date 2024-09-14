#include<stdio.h>
int main(){
    int x;
    printf("Enter the temperature in centigrade: ");
    scanf("%d",&x);
    if(x<0){
        printf("Freezing weather");
    }
    else if(x>0&&x<10){
        printf("Very Cold weather");
    }
    else if(x>10&&x<20){
        printf("Cold weather");
    }
    else if(x>20&&x<30){
        printf("Normal in Temperature");
    }
    else if(x>30&&x<40){
        printf("Its Hot");
    }
    else{
        printf("Its Very Hot");
    }
    return 0;
}