#include<stdio.h>
#include<time.h>
void main(){
    int n,sum=0,i;
    double usedTime;
    clock_t start ,end;
    printf("Enter number");
    scanf("%d",&n);
    start=clock();
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    end=clock();

    printf("%d \n",sum);
    printf("%f",((double)(end-start))/CLOCKS_PER_SEC);
}