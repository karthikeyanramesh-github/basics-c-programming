#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<3;i=i+1){
        printf("-----------------------------\n");
        printf("parent loop [%d]\n",i);
        for(j=0;j<2;j=j+1){
            printf("child loop [%d]\n",j);
        }
        printf("-------------------------------");
    }
}