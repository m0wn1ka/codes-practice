#include <stdio.h>
int main(){
	int n,i;
	int factors=0;
	printf("give n ");
	scanf("%d",&n);
	printf("factos initial val :%d",factors);
	for (i=1;i<=n;i++){
		
		if(n%i==0){
			factors++;
			printf("\n%d and factors count is %d ",i,factors);
		}
	}
	if(factors>2){
		printf("\n%d is composite",n);
	}
	else{
		printf("\n%d is prime",n);
	}
}
