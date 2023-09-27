#include<stdio.h>
int main(){
    char name[]={'k','a','r','t','h','i','k'};
    char *ptr;
    int i;
    ptr=name;
    for(i=0;i<7;i=i+1){
        printf("%c char in %p\n",*ptr,ptr);
        ptr=ptr+1;
    }

    return 0;
}