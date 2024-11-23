#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node*link;
};
struct node * getnode()
{
	int i,data,n;
	struct node*node,*temp,*head=NULL;
	printf("Enter the no of node: \n");	
    scanf("%d",&n);
	temp=NULL;
	for(i=1;i<=n;i++)
	{
		node=malloc(sizeof(struct node));
		printf("enter data %d:\n",i);
		scanf("%d",&node->data);
		node->link=NULL;
		if(head==NULL)
		{
			head=node;
			temp=node;
		}
		else{
			temp->link=node;
			temp=node;
		}
	}
	return head;
}
void reverse(struct node*head)
{
	struct node*temp,*temp1; //keep the head pointer points to the 1st node and temp->1st node 
	//and the temp1 points to the 2nd node.. by traversing all the three nodes ae can reverse the list
	temp=head;
	temp1=temp->link;
	head->link=NULL;
	temp=temp1->link;
   while(temp1!=NULL)
   {
      temp=temp1->link;
      temp1->link=head;
      head=temp1;
      temp1=temp;
   }
	printf("the reverse of the linked list is:\n");
	displaynode(head);
}

void displaynode(struct node*head)
{
	int data;
while(head!=NULL)
{
	printf("data=%d\n",head->data);
	head=head->link;
}
}
int main() {
struct node*head=NULL,*rev;
head=getnode();
rev=head;
displaynode(head);
reverse(rev);
return 0;
}

