#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            printf("The factor of %d is: %d\n",x,i);
        }
    }
    return 0;
}