#include<stdio.h>
int main()
{
    int num[]={10,20,30,40,5,2,5};
    int value,i;
    int pos=-1;
    printf("Enter the value:");
    scanf("%d",&value);
    for(i=0;i<7;i++){
        if(value==num[i]){
            pos=i+1;
            break;
        }
    }
    if(pos==-1){
        printf("Item not found");
    }
    else{
         printf("Item is found at position %d",pos);
    }
}

