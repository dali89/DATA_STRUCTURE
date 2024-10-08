#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

struct node
{
	int data;
	struct node *next;
};
struct node *root=NULL;


void insert_at_end(int x)
{
	struct node *p,*temp;
p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	p->next=NULL;
	
	if(root==NULL)
	{
		root=p;
	}
	else
	{  
	    temp=root;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
	printf("element inserted");
}

void traversal()
{
	struct node *temp;
	temp=root;
	
	while(temp->next!=NULL)
	{
		printf("| %d |--->",temp->data);
		temp=temp->next;
	}
    		printf("| %d |\t\t --->NULL",temp->data);	
	
}

int main()
{
	int x,ch,pos;
	
	printf("\t\t<...............LINKED LIST...............>\n");
	printf("\t\t<........BASIC OPERATIONS OF LINKED LIST.......>\n");
	do{
		printf("\n1 for insertion at ending");
		printf("\n2 for traversal");	
	
	    printf("\n3 for exit"); 
	    printf("\n\nenter your choice");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	     case 1:
	     	printf("\nenter any element");
	     	scanf("%d",&x);
	     	
	     	insert_at_end(x);
	     	break;
	     	
	    case 2:
		   traversal();
	     	break;	

		case 3:
		    exit(0);
				
		default:
		     printf("\nenter correct choice");
        			
		}
	}while(1);
	
}
