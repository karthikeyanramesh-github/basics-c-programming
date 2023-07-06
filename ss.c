#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter your choice :");
    scanf("%d",&choice);
    printf("----------------------------------\n");
    if(choice>7){
        printf("enter your values of a & b :");
        scanf("%d%d",&a,&b);
        printf("--------------------------------\n");
    }
    switch(choice)
    {
        case 1:
        printf("addition = %d\n",a+b);
        break;

        case 2:
        printf("subraction = %d\n",a-b);
        break;

        case 3:
        printf("multiplication = %d\n",a*b);
        break;

        case 4:
        printf("division = %d\n",a/b);
        break;

        case 5:
        printf("modulus= %d\n",a%b);
        break;

        default:
        printf("error : give correct choice input range not within 1 to 5\n");
        break;
    }
}