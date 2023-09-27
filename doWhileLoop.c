#include<stdio.h>
int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    do{
        printf("value = %d\n",a);
        a=a+1;
    }while(a<=10);

    return 0;
}