#include<stdio.h>
void swap(int *p,int *r){

    int temp;
    temp=*p;
    *p=*r;
    *r=temp;
    
/*
    *p=*p+*r;
    *r=*p-*r;
    *p=*p-*r;
    
    int sum=*p+*r;
    *p=sum-*p;
    *r=sum-*r;
*/

}
int main(){
    int a,b;
    printf("---------------------------------------------------------------\n");
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("--------------------------------------------------------------\n");
    printf("the given values ------> a = %d & b = %d\n",a,b);
    swap(&a,&b);
    printf("the value of a & b after swapping data ------> a = %d || b = %d\n",a,b);
}