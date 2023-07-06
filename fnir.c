#include<stdio.h>
int sum(){
    int x,y;
    printf("enter a value:");
    scanf("%d%d",&x,&y);
    return x+y;
}
int main(){
    printf("-----------------------------\n");
    printf("sum of two numbers = %d\n",sum());
}