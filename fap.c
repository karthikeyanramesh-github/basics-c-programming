#include<stdio.h>
int i; //global variable;
void fap(int *ptr){
    // int i;
    printf("\n------------------------------------------------\n");
    printf("starting address = %p\n",ptr);
    for(i=0;i<5;i=i+1,ptr=ptr+1){
        //ptr[i]=ptr[i]*10;
        //*(ptr+i)=*(ptr+i)*10;
        *ptr=*ptr * 10;
    }
}
int main(){
    int arr[]={2,3,4,5,6};
    // int i;
    printf("---------------------------------------------------\n");
    printf("address of arr[] = %p\n",&arr);
    printf("given arrays values---->\n");
    for(i=0;i<5;i=i+1){
        printf("%d\t",arr[i]);
    }
    fap(arr);
    printf("after update arrays values using pointer --->\n");
    for(i=0;i<5;i=i+1){
        printf("%d\t",arr[i]);
    }
    printf("\n ");
}