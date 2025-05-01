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
  struct node * deleteAtbetween(struct node * head,int index)
  {
  	struct node * p=head;
  	struct node * q=head->next;
  for(int i=0;i<index-1;i++)
  	{
  		p=p->next;
  		q=q->next;
	}
		p->next=q->next;
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
  	
  	head=deleteAtbetween(head,1	);
  	printf("\n after delection\n=");
  	traversallist(head);
  }
