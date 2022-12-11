#include<stdio.h>
int XY(int x,int y){
    if(y==1){
        return x;
    }
    return x*XY(x,y-1);
}
void main(){
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);

    printf("%d",XY(x,y));
}