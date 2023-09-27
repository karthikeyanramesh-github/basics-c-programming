#include<stdio.h>
int ms; //global variable;
void fa(int arr[]){
    for(int i;i<ms;i=i+1){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int a[]={98,45,54,89};
    ms=4;
    fa(a);

    return 0;
}