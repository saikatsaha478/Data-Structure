#include<stdio.h>
#include <stdbool.h>
#define capacity 5

int ourqueue[capacity];
int front=0, rear = -1, totalitem = 0;

bool isfull(){
    if(totalitem==capacity){
        return true;
    }
    return false;
}
bool isempty(){
    if(totalitem==0){
        return true;
    }
    return false;
}
void enqueue(int item){
    if(isfull()){
        printf("Queue is full.\n");
    }
        rear = (rear+1)%capacity;
        ourqueue[rear]=item;
        totalitem++;
}
int dequeue(){
    if(isempty()){
        printf("Queue is empty.\n");
    }
    int frontitem = ourqueue[front];
    ourqueue[front]= 0;
    front = (front+1)%capacity;
    totalitem--;
    return frontitem;
}
void printqueue(){
    int i;
    printf("Queue\n");
    for(i=0;i<capacity;i++){
        printf("%d",ourqueue[i]);
    }
    printf("\n");
}
int main(){
    printf("Implementing queue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printqueue();
    enqueue(50);
    printqueue();
    printf("Dequeue:%d\n",dequeue());
    printqueue();
    enqueue(60);
    printqueue();
    return 0;
}
