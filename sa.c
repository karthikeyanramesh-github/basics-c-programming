#include<stdio.h>
struct ex{
    int r,c;
};
int main(){
    struct ex p[3];
    int i;
    printf("-----------------------------------------\n");
    for(i=0;i<2;i=i+1){
        printf("enter r & c values:");
        scanf("%d%d",&p[i].r,&p[i].c);
    }
    printf("-----------------------------------------\n");
    p[2].r=p[0].r+p[1].r;
    p[2].c=p[0].c+p[1].c;
    printf("output of p[2] is (r,c):%d,%d\n",p[2].r,p[2].c);
}