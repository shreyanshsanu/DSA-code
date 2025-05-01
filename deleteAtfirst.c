#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
 void traversel(struct node * ptr)
 {
 	while(ptr!=NULL)
 	{
 		printf("%d",ptr->data);
 		ptr=ptr->next;
	 }
 }
  struct node * delectionAtFirst(struct node *head)
  {
  	struct node * ptr=head;
  	head=head->next;
  	free(ptr);
  	return head;
  }
  int main()
  {
  	  struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    
    second=(struct node*)malloc(sizeof(struct node));
    
    third=(struct node*)malloc(sizeof(struct node));
     
    head->data=4;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=8;
    third->next=NULL;
    printf(" \n before delection= ");
    traversel(head);

    head=delectionAtFirst(head);
    printf(" \n after delection= ");
       traversel(head);
  }
