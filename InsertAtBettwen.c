#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node* next;
     int data;
};
 
void traverselist(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("\n element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
 struct Node* insertatbettwen(struct Node* head,int data,int index)
 {
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
    	p = p->next;
    	i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
  
 }

 int main()
 {
    struct Node*head;
    struct Node*first;
    struct Node*second;
    struct Node*third;

    head=(struct Node*)malloc(sizeof(struct Node));
    
    second=(struct Node*)malloc(sizeof(struct Node));
    
    third=(struct Node*)malloc(sizeof(struct Node));
     
    head->data=8;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=10;
    third->next=NULL;
    traverselist(head);
    head=insertatbettwen(head,14,2);
       traverselist(head);
 }
