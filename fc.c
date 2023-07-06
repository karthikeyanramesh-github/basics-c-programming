#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("sp.c","r");
    fp2=fopen("test.c","w");
    while(1){
        c=fgetc(fp1);
        if(c!=EOF){
            fputc(c,fp2);
        }
        else{
            break;
        }
    }
    printf("file content copied successfully!\n");
    fclose(fp1);
    fclose(fp2);
}