#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("simpleProgram.c","r");
    fp2=fopen("fileCopyTest.c","w");
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

    return 0;
}