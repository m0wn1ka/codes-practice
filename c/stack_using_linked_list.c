#include <stdio.h>
#include <malloc.h>
struct node{
	int n;
	struct node *next;
};
struct node *top,*temp;
struct node *push(struct node *top);
struct node *display(struct node *top);
struct node *pop(struct node *top);
void main(){
	top=NULL;
	temp=NULL;
	//pushing 
//	top=push(top);
//	top=push(top);
//	top=push(top);	
	//displaying
	top=display(top);
	//popping
	top=pop(top);
	printf("display after pop\n");
	top=display(top);
}
struct node *push(struct node *top){
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	printf("give num to push");
	scanf("%d",&new_node->n);
	if(top==NULL){
		top=new_node;
		new_node->next=NULL;
		return top;	
	}
	else{
		new_node->next=top;
		top=new_node;
		return top;
	}
}
struct node *display(struct node *top){
	temp=top;
	while(temp!=NULL){
		printf("%d->",temp->n);
		temp=temp->next;
	}
	return top;
}
struct node *pop(struct node *top){
	if(top==NULL){
		printf("undeflow\n");
		return NULL;
	}
	temp=top;
	top=top->next;
	free(temp);
	return top;
}
