#include <stdio.h>
void push(char stack[],char n);
char pop(char stack[]);
void display(char stack[]);
char stack[10];
char exp[5];
char poped_char;
int n,i,size=10,top=-1;
void main(){
	int flag=0;
	//pushing 
	printf("give expression to push");
	scanf("%s",exp);
	printf("\nexp is %s\n",exp);
	int len=sizeof(exp)/sizeof(exp[0]);
//	printf("\nlen  %d ",len);
	for(i=0;i<len;i++){
		printf("infor loop %d and stack[i ] is %c \n",i,exp[i]);
		if(exp[i]=="{"){
			push(stack,"}");
				printf("\ntop is %d at line 19",top);
		}
		if(exp[i]=="("){
			push(stack,")");
		}
		if(exp[i]=="["){
			push(stack,"]");
		}
		if(exp[i]==")" || exp[i]=="]" || exp[i]=="}"){
			poped_char=pop(stack);
			if(stack[i]!=poped_char){
				flag=1;
				break;
			}
		
		}
		printf("\ntop is %d",top);
			
		}
		if(flag==0 && top==-1){
			printf("displaying stack");
			display(stack);
			printf("\nparantehsis matched");
		}
		else{
			printf("\ninvalid expresion");
		}
	}
void push(char stack[],char n){
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
void display(char stack[]){
	for (i=0;i<=top;i++){
		printf("%c\t",stack[i]);
	}
}
char pop(char stack[]){
	if(top==-1){
		printf("stack underflow");
		return;
	}
	else{
		char temp=stack[top];
		top=top-1;
		return temp;
	}
	}


