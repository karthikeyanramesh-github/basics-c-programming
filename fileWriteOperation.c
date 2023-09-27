#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("fw.txt","w");
    char ch='k';
    putc(ch,fp);
    fclose(fp);

    return 0;
}