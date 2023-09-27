#include<stdio.h>
int main(){
    int a=10;
    printf("the value of a = %d\n",a);
    printf("post increment of a = %d\n",a--);
    printf("the value of (a--) = %d\n",a);
    printf("pre increment of a = %d\n",--a);
    printf("the value of (--a) = %d\n",a);

    return 0;
}