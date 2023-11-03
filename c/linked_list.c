#include <stdio.h>
#include <malloc.h>
struct node{
	int n;
	struct node * next;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before_value(struct node *);
struct node *sort(struct node *);
void main(){
//creating 
start=create_ll(start);
//display
start=display(start);
//insert begin
//start=insert_beg(start);
//insert end
//start=insert_end(start);
//start=display(start);
//start=insert_before_value(start);
//start=display(start);
start=sort(start);
start=display(start);

}
struct node *create_ll(struct node *start){
struct node *new_node, *ptr;
int num;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=-1)
{
 new_node = (struct node*)malloc(sizeof(struct node));
 new_node->n=num;
 if(start==NULL)
 {
 new_node -> next = NULL;
 start = new_node;
 }
 else{
 	ptr=start;
 	while(ptr->next!=NULL)
 ptr=ptr->next;
 ptr->next = new_node;
 new_node->next=NULL;
 }
 printf("\n Enter the data : ");
 scanf("%d", &num);
 }
 return start;	
}

struct node *display(struct node *start){
	struct node *ptr=start;
	do{
		printf("%d->",ptr->n);
		ptr=ptr->next;
	}while(ptr!=NULL);
	return start;
}
struct node *insert_beg(struct node *start){
	
	int num;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	printf("give num");
	scanf("%d",&new_node->n);
	new_node->next=start;
	start=new_node;
	
	return start;
	
}
struct node *insert_end(struct node *start){
	struct node *ptr=start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	printf("give num to insert at last");
	scanf("%d",&new_node->n);
	ptr->next=new_node;
	new_node->next=NULL;
	printf("inserted at end succesfuly");
	return start;
}
struct node *insert_before_value(struct node *start){
	printf("give number to insert before");
	int value1;
	scanf("%d",&value1);
	struct node *ptr,*new_node,*temp;
	ptr=start;
	new_node=(struct node *)malloc(sizeof(struct node ));
	printf("\ngive number to insert");
	scanf("%d",&new_node->n);
	while(ptr->next!=NULL && ptr->next->n!=value1){
		ptr=ptr->next;
	}
	if(ptr->next==NULL){
		printf("\nno such value...inserting at last postion\n");
		ptr->next=new_node;
		new_node->next=NULL;
		return start;
	}
	temp=ptr->next;
	ptr->next=new_node;
	new_node->next=temp;
	return start;
}
struct node *sort(struct node *start){
	struct node *ptr1,*ptr2;
	int temp;
	printf("in sorting funciotn\n");
	ptr1=ptr2=start;
	while(ptr1->next!=NULL){
		ptr2=ptr1->next;
		while(ptr2!=NULL){
			if(ptr1->n > ptr2->n){
				temp=ptr2->n;
				ptr2->n=ptr1->n;
				ptr1->n=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	return start;
}

