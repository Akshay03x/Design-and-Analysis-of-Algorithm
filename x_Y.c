#include<stdio.h>
#include<time.h>
void main(){
    int x ,y,i,pow=1 ;
    double usedTime;
    clock_t start ,end;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);

    start=clock();
    for(i=1;i<=y;i++){
        pow=pow*x;
    }
    end=clock();

    printf("%d",pow);
    printf("%f",((double)(end-start))/CLOCKS_PER_SEC);
}