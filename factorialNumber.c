#include<stdio.h>
int main(){
    int n;
    long double fact=1;
    printf("enter your number:");
    scanf("%d",&n);
    if(n<0){
        printf("error: don't enter negative numbers put +ve numbers\n");
    }
    else if(n==0 || n==1){
        printf("factorial number is 1\n");
    }
    else{
        while(n>1){
            fact=fact*n;
            n=n-1;
        }
        printf("factorial number = %.Lf\n",fact);
    }

    return 0;
}