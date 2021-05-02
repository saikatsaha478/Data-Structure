#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr1, *ptr2;
    ptr1= (int *)malloc(20);
    ptr2= (int *)calloc(5,sizeof(int));
    if(ptr1 == NULL || ptr2 == NULL){
        printf("Memory not allocated.\n");
    }
    else{
        printf("Memory allocated.\n");
        ptr1= realloc(ptr1,50);
        printf("Memory reallocated\n");
        free(ptr2);
        printf("Memory free for ptr2.\n");
    }
}
