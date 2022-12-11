#include<stdio.h>
#include<time.h>
void main(){
    double usedTime;
    clock_t start ,end;
    int n,i,fac=1;
    printf("Enter number ");
    scanf("%d",&n);
    start=clock();
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    end=clock();

    printf("%d\n",fac);
    printf("%f",((double)(end-start))/CLOCKS_PER_SEC);

}