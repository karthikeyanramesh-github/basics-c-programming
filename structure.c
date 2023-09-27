#include<stdio.h>
struct example{
    int x,y;
};
int main(){
    struct example p1,p2,p3;
    p1.x=20;
    p1.y=23;
    p2.x=98;
    p2.y=89;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("-------------------------\n");
    printf("P3 (x,y):%d,%d\n",p3.x,p3.y);
}