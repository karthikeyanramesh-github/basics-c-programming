#include<stdio.h>
int main(){
    // Half pyramid alphabets
    char userInput,alphabet;
    printf("Half pyramid alphabet\n");
    printf("Enter your alphabet character: ");
    scanf("%c", &userInput);
    alphabet=userInput;
    for(int i=(int)userInput;i<=(((int)userInput)+5);i++){
        for(int j=(int)userInput;j<=i;j++){
            printf("%c ",alphabet);
        }
        alphabet++;
        printf("\n");
    }
    return 0;
}

