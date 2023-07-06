#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("fw.txt","w");
    char ch[30];
    printf("enter a string:");
    scanf("%[^\n]",ch);
    fputs(ch,fp);
    fclose(fp);
}