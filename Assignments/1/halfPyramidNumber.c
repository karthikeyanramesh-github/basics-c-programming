#include<stdio.h>
int main(){
    // Half pyramid number
    int userInput;
    printf("Half pyramid number\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(int i=1;i<=userInput;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}