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

void insert_at_position(int x,int pos)
{
	struct node *p,*temp;
	temp=root;
	for(i=1;i<pos-1;i++)
	{
		if(temp==NULL)
		{
			printf("insertion not possible");
			return ;
		}
		temp=temp->next;
	}
	p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	p->next=temp->next;
	temp->next=p;
	
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
    		printf("| %d |\t--->NULL",temp->data);	
	
}

int main()
{
	int x,ch,pos;
	
	printf("\t\t<...............LINKED LIST...............>\n");
	printf("\t\t<........BASIC OPERATIONS OF LINKED LIST.......>\n");
	do{
		printf("\n1 for insertion at any Position");
		printf("\n2 for traversal");	
	
	    printf("\n3 for exit"); 
	    printf("\n\nenter your choice");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	     case 1:
	     	printf("\nenter any element");
	     	scanf("%d",&x);
             printf("\nenter any position");
	     	scanf("%d",&pos);
	     	
	     	insert_at_position(x,pos);
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