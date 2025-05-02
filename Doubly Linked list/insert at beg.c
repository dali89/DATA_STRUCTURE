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

void insert_at_beg(int x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	if(head==NULL)
	{
		head=p;
		tail=p;
		p->next=NULL;
		p->prev=NULL;
	}
	else
	{
		p->next=head;
		head=p;
		p->prev=NULL;
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
        printf("\n1 for insertion at beginning");
		
		printf("\n2 for traversal");
	 
	     printf("\n3 for exit"); 
	printf("enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
     {

	 case 1:
        printf("enter element");
	    scanf("%d",&x);
	    
	    insert_at_beg(x);
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