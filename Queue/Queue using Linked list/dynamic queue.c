#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void Qinsert(int x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	
	if(front==NULL)
	{
		front=p;
		rear=p;
		p->next=NULL;
	}
	else
	{
	
			rear->next=p;
			rear=p;
	        p->next=NULL;
	}
	printf("element inserted");
}

void Qdelete()
{
	struct node *temp;
	temp=front;
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("deleted element %d",front->data);
		if(front==rear)
		{
			front==NULL;
			rear=NULL;
			free(temp);
		}
		else
		{
			front=front->next;
			free(temp);
		}
	}
}

void traversal()
{
	struct node *temp;
		temp=front;
	if(front==NULL)
	{
		printf("\nqueue is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		
	}
}

int main()
{
	int ch,x;
	do{
		
	printf("\nenter 1 for element insert\n");  
	printf("\nenter 2 for element delete\n");  
	printf("\nenter 3 for traversal\n");  
	printf("\nenter 4 for exit\n");  
	
	
	printf("\nenter your choice");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	 printf("enter element ");
	 scanf("%d",&x);
	 
	 Qinsert(x);
	 break;
	 
	case 2:
	 Qdelete();
	 break;
	 
	case 3:
	 traversal();
	 break;
	 
	case 4:
	 exit(0);
	 break;
	 
	default:
	 printf("\nenter correct choice\n");   	
	}
    }while(1);
}