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

void del_at_end()
{
	struct node *t,*temp;
	
	if(root==NULL)
    {
    printf("linked list is empty");	
    }
    else
    {
    		temp=root;

	if(root->next==NULL)
	{
		printf("\n Deleted element=%d",root->data);
		root=NULL;
		free(temp);
	}
	else
	{
     t=root->next;
     while(t->next!=NULL)
     {
     	t=t->next;
     	temp=temp->next;
	 }
	 	printf("\n Deleted element=%d",t->data);
	 	temp->next=NULL;
	 	free(t);
	 }
   }
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
		printf("\n1 for deletion at end");
		printf("\n2 for traversal");	
	
	    printf("\n3 for exit"); 
	    printf("\n\nenter your choice");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	     case 1:
	     	
	     	
         del_at_end();
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