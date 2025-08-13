#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
  };
  typedef struct node NODE;
  int main()
  {
      NODE *head,*second,*third;
      head=(NODE*) malloc(sizeof(NODE));
      second=(NODE*) malloc(sizeof(NODE));
      third=(NODE*) malloc(sizeof(NODE));
      head->data=10;
      head->next=second;
      second->data=20;
      second->next=third;
      third->data=30;
      third->next=NULL;
      printf("%d->",head->data);
      printf("%d->",second->data);
      printf("%d->",third->data);
      printf("NULL");
      free(head);
      free(second);
      free(third);
      return 0;
      }
