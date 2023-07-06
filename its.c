#include<stdio.h>
#include<stdlib.h>
int main(){
    char buff[10];
    int x;
    printf("--------------------------------\n");
    printf("enter a value:");
    scanf("%d",&x);
    sprintf(buff,"%d",x);
    printf("x value in string format:%s\n",buff);
}