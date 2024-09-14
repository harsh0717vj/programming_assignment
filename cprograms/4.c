#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x-coordinate: ");
    scanf("%d",&x);
    printf("Enter y-coordinate: ");
    scanf("%d",&y);
    if(x>0&&y>0){
        printf("The given pointy lies is Quadrant-I(+,+)");
    }
    if(x<0&&y>0){
       printf("The given pointy lies is Quadrant-II(-,+)"); 
    }
    if(x<0&&y<0){
        printf("The given pointy lies is Quadrant-III(-,-)");
    }
    if(x>0&&y<0){
        printf("The given pointy lies is Quadrant-IV(+,-)");
    }
    return 0;
}