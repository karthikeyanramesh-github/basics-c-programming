#include<stdio.h>
int main(){
    char name[50];
    int i,mc;
    printf("enter your max. size characters:");
    scanf("%d",&mc);
    printf("enter your characters:");
    for(i=0;i<mc;i=i+1){
        scanf("%c",&name[i]);
    }
    name[i]='\0';
    printf("given input name is:%s",name);
    printf("\n");

    return 0;
}