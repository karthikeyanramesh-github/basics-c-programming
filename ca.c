#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,noe;
    printf("number of elements:");
    scanf("%d",&noe);
    // calloc function ---> (int *)calloc(noe,sizeof(int))
    p=(int *)calloc(noe,sizeof(int));
    printf("size of ptr = %ld\n",sizeof(*p));
    printf("-------------------------------------\n");
    printf("address = %p\n",p);
}