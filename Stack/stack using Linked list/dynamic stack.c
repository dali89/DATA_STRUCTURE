#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *root=NULL;
struct node *Top=NULL;

void push(int x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	p->next=NULL;
	
	if(Top==NULL)
	{
		root=p;
		Top=p;
	
	}
	else
	{
		Top->next=p;
		Top=p;
	}
	printf("\nelement inserted");
}

void pop()
{
	struct node *temp,*t;
	if(Top==NULL)
	{
		printf("\nstack is empty,deletion impossible");
	}
	else
	{
		temp=Top;
		if(root==Top)
		{
			root=NULL;
			Top=NULL;
			free(temp);
		}
		else
		{   
		    printf("\ndeleted element %d",Top->data);
		    t=root;
			while(t->next!=Top)
			{
				t=t->next;
			}
			Top=t;
			Top->next=NULL;
		}
	}
}

void traversal()
{
	struct node *temp;
	temp=root;
	if(Top==NULL)
	{
		printf("\nstack is empty");
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
	 
	 push(x);
	 break;
	 
	case 2:
	 pop();
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