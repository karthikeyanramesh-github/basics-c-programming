#include<stdio.h>
int main(){
    // Half pyramid star
    int userInput,k=1;
    printf("Floyd's triangle number\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(int i=1;i<=userInput;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            ++k;
        }
        printf("\n");
    }

    return 0;
}
