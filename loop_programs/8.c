#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int sum=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            printf("The positive divisor is: %d",i);
            while(i<=x){
                sum=sum+i;
            }
    }
    }
    printf("The sum of the positive divisors of %d are: %d",x,sum);
    if(sum==x){
        printf("%d is a perfect number",x);
    }
    else{
        printf("%d is not a perfect number",x);
    }
    return 0;
}