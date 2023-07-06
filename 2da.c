#include<stdio.h>
int main(){
    int arr[3][3]={{78,87},{12,23}};
    int r,c;
    printf("-------------------------------------\n");
    for(r=0;r<2;r=r+1){
        for(c=0;c<2;c=c+1){
            printf("2d array value[%d][%d]=%d\n",r,c,arr[r][c]);
        }
    }
}