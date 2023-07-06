#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your values of a & b :");
    scanf("%d%d",&a,&b);
    printf("---------------------------------\n");
    printf("logical and (a&&b) = %d\n",a&&b);
    printf("logical or (a||b) = %d\n",a||b);
    printf("logical not !(a<b) = %d\n",!(a<b));
    printf("----------------------------------\n");
    printf("output will display only boolean format\n");
}