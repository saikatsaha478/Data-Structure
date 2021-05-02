#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* addtoempty(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head = temp;
    return head;
};

struct node* addatbeg(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data= data;
    temp-> next= NULL;
    temp->next = head;
    head->prev= temp;
    head=temp;
    return head;
};

struct node* addatend(struct node* head, int data){
    struct node* temp, *tp;
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while(tp->next!= NULL){
        tp = tp->next;
        tp->next = temp;
        temp->prev = tp;
        return head;
    }
};

int main(){
    struct node* head = NULL;
    struct node* ptr;
    head = addtoempty(head,45);
    head = addatbeg(head,34);
    head = addatend(head,9);
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
