#include<stdio.h>
#include<time.h>
void main(){
    int n,x=0,y=1;
    double usedTime;
    clock_t start ,end;
    printf("enter N:");
    scanf("%d",&n);

    printf(" 0 1");
    start=clock();
    for (int i=1;i<n;i++){
        int sum=x+y;
        printf("%4d",x+y);
        x=y;
        y=sum;
    }
    end=clock();
    printf("%f",((double)(end-start))/CLOCKS_PER_SEC);

}