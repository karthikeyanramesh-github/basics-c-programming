#include<stdio.h>
int ms; //global variable;
void fa(int arr[]){
    printf("-----------------------------\n");
    for(int i=0;i<ms;i=i+1){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int a[30],i;
    printf("---------------------------------\n");
    printf("enter your maximum array size:");
    scanf("%d",&ms);
    printf("enter your array values:");
    for(i=0;i<ms;i=i+1){
        scanf("%d",&a[i]);
    }
    fa(a);
}