#include <stdio.h>
#include <malloc.h>
struct node{
	int n;
	struct node *next;
};
struct node *temp,*new_top;
int flag;
struct node *top,*temp;
struct node *push(struct node *top,int x);
struct node *display(struct node *top);
struct node *pop(struct node *top);
struct node *reverse(struct node *top);
void main(){
	top=NULL;
	temp=NULL;
	printf("enter -1 to exit,anyother num to push into stack\n");
	scanf("%d",&flag);
	while(flag!=-1){
	top=push(top,flag);
	printf("enter -1 to exit,anyother num to push into stack\n");
	scanf("%d",&flag);
	}
	top=display(top);
	printf("\n calling reverse function to reverse the string\n");
	top=reverse(top);
	printf("\nafter revere \n");
	top=display(new_top);
	
}
struct node *push(struct node *topp,int x){
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	
	new_node->n=x;
	if(topp==NULL){
		topp=new_node;
		new_node->next=NULL;
		return topp;	
	}
	else{
		new_node->next=topp;
		topp=new_node;
		printf("\n%d is pushed\n",x);
		return topp;
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
		printf("\n %d is popepd\n",top->n);
	temp=top;
	top=top->next;
	free(temp);

	return top;
}
struct node *reverse(struct node *top){
	printf("\n in rverser function\n");

	if(top==NULL){
			printf("\nempyt stack ");
		return NULL;
	
	}
	new_top=push(new_top,top->n);
	printf("\n in rverser function2\n");
	while(top->next!=NULL){
			printf("\n in rverser function3 \n");
		top=pop(top);
		new_top=push(new_top,top->n);
	
	}
	printf("\njust before retuning new topin revers\n");
	return new_top;
}
