#include <stdio.h>
int stack[20];
int top1=-1;
int top2=19;
int num,temp;
void push1(){
	if(top1==top2-1){
		printf("overflow");
		return;
	}
	else{
		top1++;
		printf("\nenter num to push into stack1");
		scanf("%d",&num);
		stack[top1]=num;
		return;
	}
}

void push2(){
	if(top2==top1+1){
		printf("overflow");
		return;
	}
	else{
		top2--;
		printf("\nenter num to push into stack2");
		scanf("%d",&num);
		stack[top2]=num;
		return;
	}
}
void display1(){
	for(temp=0;temp<top1;temp++){
		printf("%d->",stack[temp]);
	}
	return;
}
void display2(){
	for(temp=19;temp>=top1;temp--){
		printf("%d->",stack[temp]);
	}
	return;
}
void main(){
	//push into stack1
	push1();
	//push into stack2
	push2();
	//display1
	printf("\ndisplaying stack1\n");
	display1();
	//display2
	printf("\ndisplaying stack2\n");
	display2();
	
}
