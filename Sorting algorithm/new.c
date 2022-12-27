#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *f1,*f2,*f3;
    int f=0;
    f1=fopen("Best.text","w");
    f2=fopen("Worst.text","w");
    f3=fopen("random.text","w");
    for(int i=1;i<=1000000;i++){
        // fprintf(f1,"%d\n",i);
        // fprintf(f2,"%d\n",1000000-i+1);
        fprintf(f3,"%d\n",rand());
    }
    printf("%d",f);
}