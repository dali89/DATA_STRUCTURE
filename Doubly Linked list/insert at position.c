#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;

void insert_at_position(int x,int pos)
{
	 struct node *p,*temp;
	 p=(struct node *)malloc(sizeof(struct node));
	 
	 p->data=x;
	 if(head==NULL)
	 {
	 	printf("inufficient elements are available in linked list insertion at given postion is not possible");
	    return ;
	 }
	 else
	 {
	 	int i;
	   temp=head;
	   for(i=1;i<pos-1;i++)
	   {
	        temp=temp->next;   	
	   }	
	   //p->next=temp;
	   p->next=temp->next;
	   temp->next=p;
	   //p->prev=temp;
	   //p->next->prev=p;
	 }
	 printf("element inserted");
	 
}

void traversal_at_beg()
{ 
    struct node *temp;
    temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int x,pos,ch;
	do{
        printf("\n1 for insertion at Position");
		
		printf("\n2 for traversal");
	 
	     printf("\n3 for exit"); 
	printf("enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
     {

	 case 1:
        printf("enter element");
	    scanf("%d",&x);
        printf("enter position");
	    scanf("%d",&pos);
	    insert_at_position(x,pos);
	    break;

    case 2:
	     traversal_at_beg();
		 break;
		 	    
	case 3:
	   exit(0);
	   break;
	   
	default:
	printf("enter correct choice"); 
    }
	}while(1);	      
}    