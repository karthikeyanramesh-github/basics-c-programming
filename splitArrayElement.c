#include<stdio.h>
int main(){
    int a[30],i,j,t,len;
    int l1,l2,l3;
    int tl1[20],tl2[20],tl3[20];
    int choice=1;
    i=0;
    while(choice!=0){
        printf("enter your elements: ");
        scanf("%d",&a[i]);
        printf("do you want to continue? enter your choice if you want to add (1: yes 0: no): ");
        scanf("%d",&choice);
        i=i+1;
    }
    len=i;
    if((len%2==0) && len>1){
        l1=l2=len/2;
        for(i=0;i<l1;i=i+1){
            tl1[i]=a[i];
        }
        j=0;
        for(i=l1;i<len;i=i+1){
            tl2[j]=a[i];
            j=j+1;
        }
        printf("\n<--- if user enter even length elements data split 2 lists--->\n");
        printf("list 1 elements\n");
        for(i=0;i<l1;i=i+1){
            printf("%d\t",tl1[i]);
        }
        printf("\nlist 2 elements\n");
        for(i=0;i<l2;i=i+1){
            printf("%d\t",tl2[i]);
        }
        printf("\n");
    }
    else{
        l1=(len-1)/2;
        for(i=0;i<l1;i=i+1){
            tl1[i]=a[i];
        }
        j=0;
        for(i=i;i<l1*2;i=i+1){
            tl2[j]=a[i];
            j=j+1;
        }
        t=i;
        j=0;
        l2=len-(l1*2);
        for(i=t;i<len;i=i+1){
            tl3[j]=a[i];
            j=j+1;
        }
        printf("\n<--- if user enter odd length elements data split 3 lists--->\n");
        printf("list 1 elements\n");
        for(i=0;i<l1;i=i+1){
            printf("%d\t",tl1[i]);
        }
        printf("\nlist 2 elements\n");
        for(i=0;i<l1;i=i+1){
            printf("%d\t",tl2[i]);
        }
        printf("\nlist 3 elements\n");
        for(i=0;i<l2;i=i+1){
            printf("%d\t",tl3[i]);
        }
        printf("\n");
    }

    return 0;
}