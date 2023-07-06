#include<stdio.h>
struct dt1{
    int x;
    char s[40];
};
union dt2{
    int y;
    char s1[40];
};
int main(){
    struct dt1 struc;
    union dt2 uni;
    printf("-------------------------------------------------\n");
    printf("size of dt1 (struct) :%ld bytes\n",sizeof(struc));
    printf("size of dt2 (union) :%ld bytes\n",sizeof(uni));

}