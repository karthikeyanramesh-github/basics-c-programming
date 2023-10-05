#include<stdio.h>
int main(){
    // Inverted half pyramid star
    int userInput;
    printf("Inverted half pyramid star\n");
    printf("Enter your number: ");
    scanf("%d", &userInput);
    for(int i=userInput;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}