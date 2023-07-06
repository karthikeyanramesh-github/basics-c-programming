#include<stdio.h>
int main(){
    int nos[20];
    int i,n;
    int rot;
    int temp[20];
    int result[20];
    int j,temp2[20];
    printf("enter the size of list: ");
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
        scanf("%d",&nos[i]);
    }
    printf("enter number of rotations: ");
    scanf("%d",&rot);
    i=0;
    while(i<rot){
        temp[i]=nos[i];
        i=i+1;
    }
    j=0;
    while(i<n){
        result[j]=nos[i];
        i=i+1;
        j=j+1;
    }
    j=n-rot;
    for(i=0;i<rot;i=i+1){
        result[j]=temp[i];
        j=j+1;
    }
    printf("given array list--->\n");
    for(i=0;i<n;i=i+1){
        printf("%d\t",nos[i]);
    }
    printf("\nafter rotate the list array results--->\n");
    for(i=0;i<n;i=i+1){
        printf("%d\t",result[i]);
    }
}