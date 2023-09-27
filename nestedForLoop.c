#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i=i+1){
        for(int j=2;j<i;j=j+1){
            if(i%j==0){
                printf("not prime number\n");
                break;
            }
            else{
                printf("prime number\n");
            }
        }
    }

    return 0;
}