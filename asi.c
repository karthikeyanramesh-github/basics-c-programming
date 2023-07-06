#include<stdio.h>
int main(){
    int i,a[5]={12,34,56,78,90};
    printf("--------------------------\n");
    for(i=0;i<5;i=i+1){
        printf("value[%d]=%d\n",i,a[i]);
    }
}