#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum=sum+i;
    }
     printf("The sum of first n natural numbers is: %d\n",sum);
     int avg=sum/n;
     printf("The Average of the sum the first n natural number is: %d",avg);
    return 0;
}