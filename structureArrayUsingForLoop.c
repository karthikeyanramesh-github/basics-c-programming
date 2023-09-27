#include<stdio.h>
struct ex{
    int r,c;
};
int main(){
    struct ex p[3];
    int i,max;
    printf("enter your max. input values:");
    scanf("%d",&max);
    for(i=0;i<max;i=i+1){
        printf("enter r & c values:");
        scanf("%d%d",&p[i].r,&p[i].c);
    }
    //p[2].r=p[0].r+p[1].r;
    //p[2].c=p[0].c+p[1].c;
    for(i=0;i<max;i=i+1){
        printf("p%d (r,c) is :%d,%d\n",i,p[i].r,p[i].c);
    }
    //printf("output of p[2] is (r,c):%d,%d\n",p[2].r,p[2].c);

    return 0;
}