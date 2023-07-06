#include<stdio.h>
int main(){
    int n,a[10],i;
    printf("enter your number of elements: ");
    scanf("%d",&n);
    if(n<=10)
    {
        printf("enter the elements one by one: ");
        for(i=0;i<n;i=i+1){
            scanf("%d",&a[i]);
        }
        printf("elements in array are -->\n");
        for(i=0;i<n;i=i+1){
            printf("%d\t",a[i]);
        }
        //logic for finding sqr of even number and cube of odd number
        for(i=0;i<n;i=i+1){
            if(a[i]%2==0){
                a[i]=a[i]*a[i];
            }
            else if(a[i]<0){
                a[i]=0;
            }
            else if((a[i]%2)!=0){
                a[i]=a[i]*a[i]*a[i];
            }
        }
        printf("\nresults --->\n");
        for(i=0;i<n;i=i+1){
            printf("%d\t",a[i]);
        }
        printf("\n");
    }
    else{
        printf("error in memory array size!\n");
    }
}