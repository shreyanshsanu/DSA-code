#include<stdio.h>
#include<stdlib.h>
 struct Node{
     int data;
     struct node*next;
 };
  void linkedlisttravrese(struct Node*ptr)
  {
    while(ptr!=NULL)
    {
    	printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
	}
  }
 int main()
 {
    struct Node*head;
    struct Node*second;
    struct Node*third;
     
    head=(struct node*)malloc(sizeof(struct Node));
    second=(struct node*)malloc(sizeof(struct Node));
    third=(struct node*)malloc(sizeof(struct Node));

    head->data=6;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=9;
    third->next=NULL;
    
    linkedlisttravrese(head);
 }
