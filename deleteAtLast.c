#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
 void traversallist(struct node *ptr)
 {
 	while(ptr!=NULL)
 	{
 		printf("%d",ptr->data);
 		ptr=ptr->next;
	 }
 }
  struct node * deleteAtLast(struct node * head)
  {
  	struct node * p=head;
  	struct node * q=head->next;
   while(q->next!=NULL)
  	{
  		p=p->next;
  		q=q->next;
	}
		p->next=NULL;
  		free(q);
  		return head;
  }
  int main()
  {
  	struct node * head;
  	struct node * first;
  	struct node * second;
  	struct node * third;
  	head=(struct node *)malloc(sizeof(struct node));
  	first=(struct node *)malloc(sizeof(struct node));
  	second=(struct node *)malloc(sizeof(struct node));
  	third=(struct node *)malloc(sizeof(struct node));
  	
  	head->data=4;
  	head->next=second;
  		second->data=3;
  	second->next=third;
  		third->data=1;
  	third->next=NULL;
  	printf("\nbefor delection=");
  	traversallist(head);
  	
  	head=deleteAtLast(head);
  	printf("\n after delection=");
  	traversallist(head);
  }
