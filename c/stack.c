#include <stdio.h>
void push(int stack[],int n);
void pop(int stack[]);
void display(int stack[]);
int stack[10];
int n,i,size=10,top=-1;
void main(){
	//pushing 
	printf("give num to push");
	scanf("%d",&n);
	push(stack,n);
	printf("\nprinting stack");
	display(stack);
	printf("\nnow popping elment");
	pop(stack);
	printf("\nprinting stack");
	display(stack);
	
	
}
void push(int stack[],int n){
	if(top!=size-1){
		top++;
		stack[top]=n;
		return;
	}
	else{
		printf("stack is overfloww");
		return;
	}
}
void display(int stack[]){
	for (i=0;i<=top;i++){
		printf("%d\t",stack[i]);
	}
}
void pop(int stack[]){
	if(top==-1){
		printf("stack underflow");
		return;
	}
	else{
		top=top-1;
		return;
	}
	}


