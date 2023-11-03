//Write a program to merge two sorted arrays.
#include <stdio.h>
void main(){
	int n1,n2,i,j,k;
	printf("give n1 (Size of array)");
	scanf("%d",&n1);
	int aray1[n1];
	for (i=0;i<n1;i++){
		printf("%d th element",i);
		scanf("%d",&aray1[i]);
	}
	printf("give n2 (Size of array)");
	scanf("%d",&n2);
	int aray2[n2];
	for (i=0;i<n2;i++){
		printf("%d th element",i);
		scanf("%d",&aray2[i]);
	}
	int n3=n1+n2;
	int aray[n3];
	printf("i value outside loop %d",i);
	i=j=k=0;
	while(i<n1 && j<n2){
		if(aray1[i]<aray2[j]){
			aray[k++]=aray1[i++];
		}
		else{
			aray[k++]=aray2[j++];
		}
	}
	if(i>=n1 && j<n2){
		while(j<n2){
			aray[k++]=aray2[j++];
		}
	}
	if(i<n1 && j>=n2){
		while (i<n1){
			aray[k++]=aray1[i++];
		}
	}
	printf("\nnow aray is \n");
	for (i=0;i<n3;i++){
		printf("%d ",aray[i]);
	}
	
}
