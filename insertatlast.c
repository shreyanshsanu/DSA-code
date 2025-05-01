#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *next;
	int data;
};
void traversel(struct node * ptr)
{
   while(ptr!=NULL)
   {
   	printf("%d ",ptr->data);
   	ptr=ptr->next;
	   }	
}
 struct node *insertAtLast(struct node *head,int data)
 {
 	struct node *ptr=(struct node*)malloc(sizeof(struct node));
 	ptr->data=data;
 	struct node*p=head;
 	while(p->next!=NULL)
 	{
 		p=p->next;
	 }
	     p->next=ptr;
 		ptr->next=NULL;
 		return head;
 }
   
   int main()
   {
   	struct node*head;
   	struct node*second;
   	struct node*third;
   			
   			    head=(struct node*)malloc(sizeof(struct node));
    
    second=(struct node*)malloc(sizeof(struct node));

    third=(struct node*)malloc(sizeof(struct node));
   			head->data=11;
   			head->next=second;
   			
   			second->data=14;
   			second->next=third;
   			
   			third->data =15;
   			third->next=NULL;
   			printf("befor \n");
   			traversel(head);
   			head=insertAtLast(head,18);
   			printf("\n after \n");
   			traversel(head);
   }
