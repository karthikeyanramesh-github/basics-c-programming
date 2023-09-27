#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your values of a & b :");
    scanf("%d%d",&a,&b);
    printf("less than (a<b) = %d\n",a<b);
    printf("greater than (a>b) = %d\n",a>b);
    printf("less than or equal to (a<=b) = %d\n",a<=b);
    printf("greater than or equal to (a>=b) = %d\n",a>=b);
    printf("not equal (a!=b) = %d\n",a!=b);
    printf("Note: output will display only boolean format\n");

    return 0;
}