#include<stdio.h>
int main()
{
    int a,b,c=6;
    printf("enter your values of a & b :");
    scanf("%d%d",&a,&b);
    printf("bitwise and (a&b) = %d\n",a&b);
    printf("bitwise or (a|b) = %d\n",a|b);
    printf("bitwise xor (a^b) = %d\n",a^b);
    printf("left swift operator (c<<2) = %d\n",c<<2);
    printf("right swift operator (c>>2) = %d\n",c>>2);

    return 0;
}