#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("sample.csv","w");
    int no=1;
    char name[]="karthikeyan";
    char degree[]="bsc cs";
    int year=2020;
    fprintf(fp,"NO,NAME,DEGREE,YEAR\n");
    fprintf(fp,"%d,%s,%s,%d\n",no,name,degree,year);
    fclose(fp);

    return 0;
}