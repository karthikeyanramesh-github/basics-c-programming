#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
int mod(int x,int y){
    return x%y;
}
int main(){
    int a,b;
    char choice;
    printf("------------------------------------------------\n");
    printf("enter your choice with operations (+,-,*,/,%%):");
    scanf("%c",&choice);
    printf("enter the two values:");
    scanf("%d%d",&a,&b);
    printf("---------------------------------------------------\n");
    switch(choice)
    {
        case '+':
        printf("addition of two numbers = %d\n",add(a,b));
        break;
        case '-':
        printf("subraction of two numbers = %d\n",sub(a,b));
        break;
        case '*':
        printf("multiplication of two numbers = %d\n",mul(a,b));
        break;
        case '/':
        printf("division of two numbers = %d\n",div(a,b));
        break;
        case '%':
        printf("modulus of two numbers = %d\n",mod(a,b));
        break;
        default:
        printf("please enter your correct choice with these operators (+,-,*,/,%%) ------> \n");
    }
}