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

void insert_at_beg(int x)
{
	struct node *p;
p=(struct node *)malloc(sizeof(struct node));
	
	p->data=x;
	if(root==NULL)
	{
		root=p;
		p->next=NULL;
	}
	else
	{
		p->next=root;
		root=p;
	}
	printf("element inserted");
}

//Bubble sort  

void Sort()
{
   struct node *p,*t,*temp;
   temp=(struct node *)malloc(sizeof(struct node));
   p= root;
   while(p->next!=NULL)
   {
   	t=p->next;
   	while(t!=NULL)
   	{
   		if(p->data>t->data)
   		{
		
   		temp->data=p->data;
   		p->data=t->data;
   		t->data=temp->data;
   	}
    t=t->next;	  
    }
    p=p->next;	   
    }
	printf("sorting successfully");	
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
		printf("\n1 for insertion at beginning");
		printf("\n2 for traversal");	
	
	    printf("\n3 for exit"); 
	    printf("\n\nenter your choice");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	     case 1:
	     	printf("\nenter any element");
	     	scanf("%d",&x);
	     	
	     	insert_at_beg(x);
	     	break;
	     	
	    case 2:
        printf("\nenter any element");
	     	scanf("%d",&x);
        lsearch(x);
	     	break;	

        case 3:
             traversal();
               break;

		case 4:
		    exit(0);
				
		default:
		     printf("\nenter correct choice");
        			
		}
	}while(1);
	
}

