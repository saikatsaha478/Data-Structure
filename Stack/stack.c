#include<stdio.h>
#define capacity 3
int stack[capacity];
int top = -1;
void push(int x){
    if(top<capacity-1){
        top = top+1;
        stack[top]=x;
        printf("Item add in stack %d\n",x);
    }
    else{
        printf("No space\n");
    }
}
int pop(){
    if(top>=0){
        int val = stack[top];
        top = top-1;
        return val;
    }
    printf("Exception from pop:Empty stack\n");
    return -1;
}
int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("peek called:Empty stack\n");
    return -1;
}
int main()
{
    printf("Implementing stack\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("POP Item:%d\n",pop());
    push(40);
    printf("Top of stack %d\n",peek());
    return 0;
}
