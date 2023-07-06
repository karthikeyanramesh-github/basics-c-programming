#include<stdio.h>
int main(){
    int arr[]={78,67,98,99,45};
    int *ptr,i;
    ptr=arr;
    printf("------------------------------------\n");
    for(i=0;i<5;i=i+1){
        printf("%d data (%d) address %p\n",*ptr,i,ptr);
        ptr=ptr+1;
    }
}