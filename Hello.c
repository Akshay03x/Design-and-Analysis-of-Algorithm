#include<stdio.h>
#include<time.h>
void main(){
    double usedTime;
    clock_t start,end;
    start=clock();
    
    for(int i=0;i<=100;i++){

    }
    printf("Hello from C");
    end=clock();
    usedTime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("%f",usedTime);
}