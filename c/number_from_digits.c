//Write a program to enter n number of digits. Form a number using these digits.
#include <stdio.h>
#include <math.h>
void main(){
	int n,i,ans=0;
	printf("give n");
	scanf("%d",&n);
	int nums[n];
	for (i=0;i<n;i++){
		printf("element %d\n",i);
		scanf("%d",&nums[i]);
		ans=ans+nums[i]*pow(10,i);
	}
	printf("\nans is %d",ans);
	printf("\nhelo world");
}
