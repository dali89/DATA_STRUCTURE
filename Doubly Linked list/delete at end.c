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

void del_at_end()
{
  struct node *temp;
  temp=tail;
  if(tail==NULL)
  {
  	printf("doubly linked list is empty,deletion impossible");
  }
  else
  {
  	printf("deleted element %d",tail->data);
  	if(head==tail)
  	{
  		head=NULL;
  		tail=NULL;
  		free(temp);
	  }
	else
	{
		tail=tail->prev;
		free(temp);
		tail->next=NULL;
	  }  
  }
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
        printf("\n1 for deletion at beginning");
		
		printf("\n2 for traversal");
	 
	     printf("\n3 for exit"); 
	printf("enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
     {

	 case 1:
    
	    
     del_at_end();
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