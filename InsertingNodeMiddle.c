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
void displaynode(struct node*head)
{
	int data;
while(head!=NULL)
{
	printf("data=%d\n",head->data);
	head=head->link;
}
}
void insertmid(int n,struct node*tmp1,struct node*node2)
{
	int i,count=0;
for(i=0;i<n;i++)
{
  if(tmp1!=NULL)	
  {
  	count++;
  	if(count==n-1)
  	{
  		node2->link=tmp1->link;
  		tmp1->link=node2;
	  }
	tmp1=tmp1->link;
  }
}
}
int main() {
struct node*head=NULL,*rev,*tmp1,*tmp2;
struct node*node2;
int n;
head=getnode();
tmp1=head;
tmp2=head;
displaynode(head);
node2=malloc(sizeof(struct node));
node2->link=NULL;
printf("Enter the data u want to insert:");
scanf("%d",&node2->data);
printf("Enter the position of the data:");
scanf("%d",&n);
insertmid(n,tmp1,node2);
displaynode(tmp2);
}
