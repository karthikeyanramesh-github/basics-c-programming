#include<stdio.h>
int main()
{
    int c;
    printf("enter your number:");
    scanf("%d",&c);
    printf("--------------------------");
    int a=1;
    while(a<=c){
        printf("\n");
        int b=1;
        while(b<=a){
            printf("%d",b);
            b=b+1;
        }
        a=a+1;
    }
    printf("\n");
    return 0;
}