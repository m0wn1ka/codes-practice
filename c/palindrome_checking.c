#include <stdio.h>
void main(){
	int n,i=0;
	printf("give string length");
	scanf("%d",&n);
	char string[n];
	printf("\ngive string");
	scanf("%s",string);
	int x=n/2;
	int j=n-1;
//	0,1,2,3,4
	n=5;
	x=2;
	printf("i and j are %d %d \n",i,j);
	while(i<=x ){
		if(string[i]!=string[j]){
			printf("non palindrome as i is %d=%c and j is %d=%c ",i,string[i],j),string[j];
			return;
			break;
		}
		else{
			i++;
			j--;
		}
	}
	printf("palindrme");
	return;
	
}
