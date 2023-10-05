#include<stdio.h>
int main(){
    // Inverted half pyramid number
    int userInput;
    printf("Inverted half pyramid number\n");
    printf("Enter your number: ");
    scanf("%d", &userInput);
    for(int i=userInput;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}