#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("fw.txt","a");
    char ch='a';
    putc(ch,fp);
    fclose(fp);

    return 0;
}