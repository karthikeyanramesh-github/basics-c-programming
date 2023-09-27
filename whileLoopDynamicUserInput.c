#include<stdio.h>
int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    while(a<=10){
        printf("value = %d\n",a);
        a=a+1;
    }
    return 0;
}