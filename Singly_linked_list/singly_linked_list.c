#include<stdio.h>
#include<stdlib.h>

typedef struct mylist{
    int data;
    struct mylist *next;
}node;

void insert(node *s,int data){
    while(s->next != NULL){
        s = s->next;
    }
    s->next = (node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}

void display(node *s){
    while(s->next!= NULL){
        printf("%d\n",s->next->data);
        s=s->next;
    }
}

void search(node *s, int data){
    int count = 0;
    while(s->next!=NULL){
        if(s->next->data==data){
            count++;
        }
        s=s->next;
    }
    printf("Total %d results found\n",count);
}

void deletenode(node *s,int data){
    while(s->next != NULL){
        if(s->next->data==data){
            s->next= s->next->next;
            return 0;
        }
        s = s->next;
    }
}

int main(){
    node *first = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    node *third = (node*)malloc(sizeof(node));
    node *fourth = (node*)malloc(sizeof(node));

    first->data=5;
    second->data=6;
    third->data=7;
    fourth->data=9;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    insert(first,11);
    display(first);
    search(first,6);
    deletenode(first,5);
    display(first);

    while(first != NULL){
        printf("%d->",first->data);
        first= first->next;
    }
    return 0;
}
