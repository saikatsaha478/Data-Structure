#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int item = 5;

    int left,right,middle;
    left = 0;
    right = 7;

    while(left<=right){
        middle = (left+right)/2;
        if(a[middle]==item){
            printf("Item found: %d",middle);
            return 0;
        }
        else if(a[middle]<item){
            left = middle+1;
        }
        else{
            left = middle-1;
        }
    }
    printf("Item not found");
    return 0;
}
