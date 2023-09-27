#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,noe,i;
    printf("number of elements:");
    scanf("%d",&noe);
    // malloc function ---> (int *)malloc(noe*sizeof(int))
    ptr=(int *)malloc(noe*sizeof(int));
    printf("size of ptr = %ld\n",sizeof(*ptr));
    //printf("address = %p\n",ptr);
    printf("enter your arrays values --->");
    for(i=0;i<noe;i=i+1){
        scanf("%d",&ptr[i]);
    }
    printf("given values are....\n");
    for(i=0;i<noe;i=i+1){
        printf("%d\t",*(ptr+i));
    }
    printf("\n");

    return 0;
}