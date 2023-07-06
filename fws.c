#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("fw.txt","w");
    char ch[30];
    printf("enter a string:");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i=i+1){
        putc(ch[i],fp);
    }
    fclose(fp);
}