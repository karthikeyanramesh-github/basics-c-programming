#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("test.csv","w");
    int no,year,choice;
    char degree[30],name[30];
    fprintf(fp,"NO,NAME,DEGREE,YEAR\n");
    while(1){
        printf("enter your choice if yes--->1(continue) else no--->0(exit):");
        scanf("%d",&choice);
        if(choice==1){
            printf("enter your no:");
            scanf("%d",&no);
            printf("enter your name:");
            scanf("%s",name);
            printf("enter your degree:");
            scanf("%s",degree);
            printf("enter your year:");
            scanf("%d",&year);
            fprintf(fp,"%d,%s,%s,%d\n",no,name,degree,year);
        }
        else{
            break;
        }
    }
    fclose(fp);
}