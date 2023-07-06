#include<stdio.h>
#include<stdlib.h>
void fact(){
    int n;
    long double fact=1;
    printf("\nenter your number: ");
    scanf("%d",&n);
    if(n<0)
        printf("error: don't enter negative numbers put +ve numbers\n");
    else if(n==0 || n==1)
        printf("factorial number is 1\n");
    else{
        while(n>1){
            fact=fact*n;
            n=n-1;
        }
        // for(int i=2;i<=n;i=i+1)
        //     fact=fact*i;
        printf("factorial number = %.Lf\n",fact);
    }
}
void eo(){
    int num;
    printf("\nenter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is a even number\n",num);
    else
        printf("%d is a odd number\n",num);
}
void lsd(){
    int inp,dig;
    printf("\nenter a number : ");
    scanf("%d",&inp);
    while(inp>0){
        dig=inp%10;
        printf("lsd:%d\n",dig);
        inp=inp/10;
    }
}
void prime(){
    int n,i,s=0;
    printf("enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i=i+1){
        if(n%i==0){
            s=1;
            break;
        }
        else
            s=0;
            break;
    }
    if(s==1)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
}
void pdn(){
    int num,rev=0,temp;
    printf("enter your number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rev=rev*10+(num%10);
        num=num/10;
    }
    if(temp==rev){
        printf("given number = %d\n",temp);
        printf("reverse number = %d\n",rev);
        printf("%d is palindrome number\n",temp);
    }
    else{
        printf("given number = %d\n",temp);
        printf("reverse number = %d\n",rev);
        printf("%d is not a palindrome number\n",temp);
    }
}
void an(){
    int num,sum=0,dig,temp;
    printf("enter your number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        dig=num%10;
        sum=sum+(dig*dig*dig);
        num=num/10;
    }
    if(temp==sum)
        printf("%d is an amstrong number\n",temp);
    else
        printf("%d is not an amstrong number\n",temp);
}
int main(){
    while(1){
        int choice;
        printf("\n<---- list of choice --->\n -factorial number---> put 1\n -even odd number---> put 2\n -least significant digit number---> put 3\n -prime number---> put 4\n -palindrome number---> put 5\n -amstrong number---> put 6\n -exit ---> put 7\n\n enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n<--- factorial number --->");
            fact();
            break;

            case 2:
            printf("\n<--- even odd number --->");
            eo();
            break;

            case 3:
            printf("\n<--- least significant digit number --->");
            lsd();
            break;

            case 4:
            printf("\n<---- prime number --->\n");
            prime();
            break;

            case 5:
            printf("<--- palindrome number --->\n");
            pdn();
            break;

            case 6:
            printf("\n<--- amstrong number --->\n");
            an();
            break;

            case 7:
            printf("successfully exit!\n");
            exit(0);

            default:
            printf("error ---> please enter your correct list of choice!\n"); 
        }
        int c;
        printf("\ndo you want to continue? (1: yes, 0: no): ");
        scanf("%d",&c);
        if(c==0){
            printf("program exit!\n");
            break;
        }
    }
    return 0;
}