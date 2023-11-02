#include <stdio.h>
int main(){
	int n,ans,i;
	printf("enter no of entries:");
	scanf("%d",&n);
	int nums[n];
	ans=0;
	for ( i=0;i<n;i++){
		printf("entry%d\n:",i);
		scanf("%d",&nums[i]);
		ans=ans+nums[i];
		}
		printf("ans is %d",ans/n);
		return ans/n;
}
