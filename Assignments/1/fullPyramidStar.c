#include <stdio.h>
int main() {
    // Full pyramid star
    int i,j,k,userInput;
    printf("Full pyramid star\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(i=1;i<=userInput;i++){ 
        for(j=1;j<=userInput-i;j++){
            printf("  ");
        }
        for(k=0;k!=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
