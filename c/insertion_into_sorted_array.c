//Write a program to insert a number in an array that is already sorted in ascending order.
#include <stdio.h>
void main(){
	int n,i,index,new_num;
	printf("give n (Size of array)");
	scanf("%d",&n);
	int aray[n+1];
	for (i=0;i<n;i++){
		printf("%d th element",i);
		scanf("%d",&aray[i]);
	}
	
	printf("\ngive number to insert\n");
	scanf("%d",&new_num);
	for(i=0;i<n;i++){
		if(aray[i]<new_num){
			
		}
		else{
			index=i;
			break;
		}
	}
	for(i=n;i>index;i--){
		aray[i]=aray[i-1];
		
	}
	aray[index]=new_num;
	printf("\nnow aray is \n");
	for (i=0;i<n+1;i++){
		printf("%d ",aray[i]);
	}
}
