#include <stdio.h>
int main() {
    // Full pyramid number
    int i,j,k=0,userInput,temp1=0,temp2=0;
    printf("Full pyramid number\n");
    printf("Enter your number: ");
    scanf("%d",&userInput);
    for(i=1;i<=userInput;i++){ 
        for(j=1;j<=userInput-i;j++){
            printf("  ");
            temp1++;
        }
        for(k=0;k!=2*i-1;k++){
            if(temp1<=userInput-1){
                printf("%d ",i+k);
                temp1++;
            }else{
                temp2++;
                printf("%d ",(i+k-2*temp2));
            }
        }
        temp1=temp2=k=0;
        printf("\n");
    }
    
    return 0;
}

