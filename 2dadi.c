#include<stdio.h>
int main(){
    int arr[3][3];
    int r,c,m;
    printf("-------------------------------------\n");
    printf("enter your max. values:");
    scanf("%d",&m);
    printf("enter a values for %dx%d matrix :",m,m);
    for(r=0;r<m;r=r+1){
        for(c=0;c<m;c=c+1){
            scanf("%d",&arr[r][c]);
        }
    }
    printf("-------------------------------------\n");
    printf("the given matrix values are......\n");
    for(r=0;r<m;r=r+1){
        for(c=0;c<m;c=c+1){
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
}