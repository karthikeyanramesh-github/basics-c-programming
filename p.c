#include<stdio.h>
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    printf("data in ptr is %d\n",*ptr);
    printf("address of using ptr = %p\n",ptr);
    printf("address of a = %p\n",&a);
    //*ptr=*ptr+10;
    printf("the value of a is %d\n",a);
}