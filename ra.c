#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i;
    ptr=(int *)malloc(4*sizeof(int));
    printf("------------------------------------------\n");
    printf("values in *ptr --->\n");
    for(i=0;i<4;i=i+1){
        printf("%p\t",ptr[i]);
    }
    ptr=(int *)realloc(ptr,6*sizeof(int));
    printf("\n-----------------------------------------------\n");
    printf("after reallocation --->\n");
    for(i=0;i<6;i=i+1){
        printf("%p\t",ptr[i]);
    }
    printf("\n");
}