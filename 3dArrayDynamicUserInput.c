#include<stdio.h>
int main(){
    int arr[3][3][3];
    int r,c,w,m;
    printf("enter your max. values:");
    scanf("%d",&m);
    printf("enter a values for %dx%dx%d matrix :",m,m,m);
    for(r=0;r<m;r=r+1){
        for(c=0;c<m;c=c+1){
            for(w=0;w<m;w=w+1){
                scanf("%d",&arr[r][c][w]);
            }
        }
    }
    printf("the given matrix values are......\n");
    for(r=0;r<m;r=r+1){
        for(c=0;c<m;c=c+1){
            for(w=0;w<m;w=w+1){
                printf("%d\t",arr[r][c][w]);
            }
        }
        printf("\n");
    }

    return 0;
}