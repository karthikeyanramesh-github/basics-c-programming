#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,noe;
    printf("number of elements:");
    scanf("%d",&noe);
    // malloc function ---> (int *)malloc(noe*sizeof(int))
    ptr=(int *)malloc(noe*sizeof(int));
    printf("address = %p\n",ptr);

    return 0;
}