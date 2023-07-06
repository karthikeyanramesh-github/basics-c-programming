#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("fw.txt","w");
    char ch[30];
    int choice=1;
    while(1)
    {
        printf("please enter your choice (yes--->1 || no--->0):");
        scanf("%d",&choice);
        if(choice==1){
            printf("enter a string:");
            scanf("%s",ch);
            fputs(ch,fp);
            fputc('\n',fp);
        }
        else{
            break;
        }
    }
    fclose(fp);
}