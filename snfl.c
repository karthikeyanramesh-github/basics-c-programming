#include<stdio.h>
int main()
{
    int c;
    printf("enter your number:");
    scanf("%d",&c);
    printf("-------------------------");
    for(int a=1;a<=c;a=a+1){
        printf("\n");
        for(int b=1;b<=a;b=b+1){
            printf("*");
        }
    }
    printf("\n");
    return 0;
}