#include<stdio.h>
int Factorial(int a){
    if(a==1){
        return 1;
    }
    return a*Factorial(a-1);
}
void main(){
    printf("enter Number");
    int a;
    scanf("%d",&a);
    printf("%d",Factorial(a));
}