#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter your choice :");
    scanf("%d",&choice);
    if(choice>7){
        printf("enter your values of a & b :");
        scanf("%d%d",&a,&b);
    }
    if(choice==1){
        printf("addition = %d\n",a+b);
    }
    else if(choice==2){
        printf("subraction = %d\n",a-b);
    }
    else if(choice==3){
        printf("multiplication = %d\n",a*b);
    }
    else if(choice==4){
        printf("division = %d\n",a/b);
    }
    else if(choice==5){
        printf("modulus = %d\n",a%b);
    }
    else{
        printf("error : give correct choice input range not within 1 to 5\n");
    }

    return 0;
}