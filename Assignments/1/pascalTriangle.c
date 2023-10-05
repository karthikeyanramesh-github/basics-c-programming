#include <stdio.h>
int main() {
    // Pascal triangle
    int i,j,k,userInput,temp=1;
    printf("Pascal triangle number\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(i=0;i<userInput;i++){
        for(j=1;j<=userInput-i;j++){
            printf("  ");
        }
        for(k=0;k<=i;k++) {
            if(k==0 || i==0){
                temp=1;
            }
            else{
                temp=temp*(i-k+1)/k;
                
            }
            printf("%4d",temp);
        }
        printf("\n");
    }
    return 0;
}
