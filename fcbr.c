#include<stdio.h>
void cbr(int *x){
    printf("value of x = %d\n",*x);
    *x=*x*10;
    printf("address of x = %p\n",x);
}
int main(){
    int a;
    printf("--------------------------------------\n");
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("given value of a = %d\n",a);
    printf("---------------------------------------\n");
    cbr(&a);
    printf("address of a = %p\n",&a);
    printf("value of a = %d\n",a);
}