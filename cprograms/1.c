#include<stdio.h>
int main(){
    int x;
    printf("Enter marks obtained by the student: ");
    scanf("%d",&x);
    if(x<=100&&x>=90){
        printf("The grade of the student is: O");
    }
    else if(x<=89&&x>=80){
        printf("The grade of the student is: E");
    }
    else if(x<=79&&x>=70){
        printf("The grade of the student is: A");
    }
    else if(x<=69&&x>=60){
        printf("The grade of the student is: B");
    }
    else if(x<=59&&x>=50){
        printf("The grade of the student is: C");
    }
    else if(x<=49&&x>=40){
        printf("The grade of the student is: D");
    }
    else{
        printf("The student has failed");
    }
    return 0;
}