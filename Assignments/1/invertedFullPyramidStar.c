#include <stdio.h>
int main() {
    // Inverted full pyramid star
    int i,j,k,userInput;
    printf("Inverted full pyramid star\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(i=userInput;i>=1;i--){ 
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
