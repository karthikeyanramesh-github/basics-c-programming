#include<stdio.h>
#include<stdlib.h>
int main(){
    int *m,*c,i;
    // malloc function ---> (int *)malloc(noe*sizeof(int))
    m=(int *)malloc(4*sizeof(int));
    printf("size of m(malloc()) = %ld\n",sizeof(*m));
    // calloc function ---> (int *)calloc(noe,sizeof(int))
    c=(int *)calloc(4,sizeof(int));
    printf("size of c(calloc()) = %ld\n",sizeof(*c));
    printf("array values in *m --->\n");
    for(i=0;i<4;i=i+1){
        printf("%p\t",m[i]);
    }
    printf("\n");
    printf("array values in *c --->\n");
    for(i=0;i<4;i=i+1){
        printf("%p\t",c[i]);
    }
    printf("\n");

    return 0;
}