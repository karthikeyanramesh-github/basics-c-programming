#include<stdio.h>
void multi_tab(int x){
    for(int i=1;i<=10;i=i+1){
        printf("%d x %d = %d\n",i,x,i*x);
    } 
}
int main(){
    multi_tab(15);
}