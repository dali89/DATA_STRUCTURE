#include<stdio.h>
//#inlcude<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
    };
    struct node *first=NULL;
    struct node *last=NULL;
void del_at_beg()
{
	struct node *temp;
	temp=first;
	if(first==NULL){
		printf("deletion impossible");
	}
	else
	{
		printf("deted element= %d",first->data);
		if(first==last)
		{
			first=NULL;
			last=NULL;
			free(temp);
		}
		else
		{
			first=first->next;
			last->next=first;
			first->prev=last;
			//last->next=first;
				free(temp);
		}
	}
 } 

 void traversal_at_beg()
{
	struct node *temp;
	temp=first;
	if(first==NULL)
	{
		printf("circular doubly linked list");
	}
	else
	{
		
		do{
			printf("%d",temp->data);
			temp=temp->next;
		}while(temp!=first);
		
	}
}

void traversal_at_end()
{
	struct node *temp;
	temp=last;
	if(last==NULL)
	{
		printf("circular doubly linked list");
	}
	else
	{
	
	   	do{
			printf("%d",temp->data);
			temp=temp->prev;
		}while(temp!=last);
		
	}	
}

 int main()
 {
     int x,pos,ch;
     do{
         
         printf("\n 1 for deletion at beginning");
         
         printf("\n 2 for traversal at begning");
         printf("\n 3 for traversal at ending");
         printf("\n 4 for exit");  
     printf("\nenter your choice");
     scanf("%d",&ch);
     
     switch(ch)
      {
 
      case 1:
         
      del_at_beg();
         break;
 
     case 2:
          traversal_at_beg();
          break;
          
     case 3:
          traversal_at_end();
          break;
                  
     case 4:
        exit(0);
        break;
        
     default:
     printf("\nenter correct choice"); 
     }
     }while(1);	      
 }
 
 