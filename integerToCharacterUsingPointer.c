#include<stdio.h>
int main(){
    int i[]={34,98},a;
    char c='k';
    int *in;
    char *ch;
    in=(int *) &c;
    ch=(char *) i;
    printf("data in integer pointer *in %c in address %p\n",*in,in);
    for(a=0;a<2;a=a+1){
        printf("data in character pointer *ch %d in address %p\n",*ch,ch);
        ch=(char *)((int *) ch+1);
    }
    return 0;
}