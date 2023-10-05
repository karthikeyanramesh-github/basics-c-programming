#include<stdio.h>
int main(){
    // Half pyramid star
    int userInput;
    printf("Half pyramid star\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(int i=1;i<=userInput;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
