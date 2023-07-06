#include<stdio.h>
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    printf("-----------------------------\n");
    if(a>0){
        if(a<=10){
            printf("a is within 0 to 10\n");
        }
        else{
            printf("a is above 10\n");
        }
    }
}