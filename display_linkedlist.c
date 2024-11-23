#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node
{
	int data;
	struct node*link;
};
struct node*add_new(int data)
{ 
struct node*newnode;
newnode=malloc(sizeof(struct node));
newnode->data=data;
newnode->link=NULL;
return newnode;
}
void print_node(struct node *head)
{
	int data;
	while(head!=NULL)
	{
		printf("data = %d\n",head->data);
		head=head->link;
	}
}
int main() {
	int i,n,data;
 struct node*temp=NULL,*head=NULL,*newnode;
	printf("enter the no of node to be inserted:");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the data %d:\n",i);
	scanf("%d",&data);
newnode=add_new(data);
if(head==NULL)
    {
	head=newnode;//to keep the head pointer in the 1st node.. so that we can able to print it from the 1st node
	temp=head;
     }
     else{
     	temp->link=newnode;
     	temp=temp->link;
	 }
	  print_node(head);
}
}
