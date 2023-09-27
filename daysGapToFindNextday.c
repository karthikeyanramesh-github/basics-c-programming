#include<stdio.h>
int main(){
    char days[7][15]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    int current_days;
    int nogap;
    int next_days,daybw;
    printf("enter the current days: ");
    scanf("%d",&current_days);
    printf("enter number of gap days : ");
    scanf("%d",&nogap);
    daybw=current_days+nogap;
    if(daybw<7){
        next_days=daybw;
    }
    else{
        next_days=(daybw)%7;
    }
    printf("current days : %s\n",days[current_days]);
    printf("next days : %s\n",days[next_days]);

    return 0;
}