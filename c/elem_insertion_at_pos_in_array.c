//Write a program to insert a number at a given location in an array
#include <stdio.h>
void main(){
	int n,i,pos,new_num;
	printf("give n (Size of array)");
	scanf("%d",&n);
	int aray[n+1];
	for (i=0;i<n;i++){
		printf("%d th element",i);
		scanf("%d",&aray[i]);
	}
	printf("tell position to insert new elem");
	scanf("%d",&pos);
	for (i=n;i>=pos;i--){
		aray[i]=aray[i-1];
	}
	printf("\ngive number to insert\n");
	scanf("%d",&new_num);
	aray[pos]=new_num;
	printf("\nnow aray is \n");
	for (i=0;i<n+1;i++){
		printf("%d",aray[i]);
	}
}
