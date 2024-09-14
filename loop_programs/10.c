#include<stdio.h>
int main(){
    int x;
    printf("Enter last term: ");
    scanf("%d",&x);
    int a=1;
    int b=0;
    int sum=0;
    for(int i=1;i<=x;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}