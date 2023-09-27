#include<stdio.h>
int main(){
    int max,a[50],i;
    printf("enter your max no. of value insert:");
    scanf("%d",&max);
    printf("enter your array values:\n");
    for(i=0;i<max;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("print your given values......\n");
    for(i=0;i<max;i=i+1){
        printf("%d\t",a[i]);
    }
    printf("\n");

    return 0;
}