#include<stdio.h>
int main(){
    float i,u,b,sa;
    char ch;
    printf("Enter Customer's ID: ");
    scanf("%f",&i);
    printf("Enter Customer's name: ");
    scanf("%s",&ch);
    printf("Enter units consumed by the Customer: ");
    scanf("%f",&u);
    if(u<=199){
        b=u*1.20;
        printf("Amount charges @ Rs. 1.20 per unit: %f\n",b);
        
    }
    else if(u>=200&&u<400){
        b=u*1.50;
         printf("Amount charges @ Rs. 1.50 per unit: %f\n",b);
        
    }
    else if(u>=400&&u<600){
        b=u*1.80;
         printf("Amount charges @ Rs. 1.80 per unit: %f\n",b);
        
    }
    else if (u>=600){
        b=u*2.00;
         printf("Amount charges @ Rs. 2.00 per unit: %f\n",b);
    }
     if(b>400){
            sa=(15*b)/100;
            printf("Surcharge Amount: %f\n",sa);
        }
    float sum= b+sa;
    printf("Net Amount paid by the Customer: %f",sum);
    return 0;
}