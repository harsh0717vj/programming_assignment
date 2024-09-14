#include<stdio.h>
int main(){
    int x;
    printf("Enter ORIGINAL VALUE: ");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
        printf("ABSOLUTE VALUE: %d",x);
    }
    return 0;
}