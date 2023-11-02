//swap  2 numbers using call by reference
#include <stdio.h>
void swap(int *,int *);
void main(){
	int a,b;
	printf("give 2 numbers");
	scanf("%d %d",&a,&b);
	printf("before swap a,b=%d %d ",a,b);
	swap(&a,&b);
	printf("before swap a,b=%d %d ",a,b);	
}
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
