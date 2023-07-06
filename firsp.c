#include<stdio.h>
int z; //global variable
int add(int x,int y){
    z=x+y;
}
int main(){
    int a,b;
    printf("---------------------------------\n");
    printf("enter the two values:");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("addition of two numbers = %d\n",z);

}