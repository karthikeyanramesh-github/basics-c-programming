#include<stdio.h>
int main(){
    char name[50];
    printf("--------------------------\n");
    printf("enter a fullname:");
    scanf("%[^\n]",name);
    printf("given name is : %s\n",name);
}