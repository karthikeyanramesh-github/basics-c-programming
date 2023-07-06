#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your values of a & b :");
    scanf("%d%d",&a,&b);
    printf("------------------------------------\n");
    if(a<b){
        printf("successfully executed\n");
    }
    else{
        printf("error : give correct input\n");
    }
}