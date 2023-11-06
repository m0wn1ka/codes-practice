#include <stdio.h>
#include <string.h>
void main(){
	char a[2]="{}";
	if(strcmp("{",a[0])==0){
		printf("mathc");
	}
	else{
		printf("nno match");
	}
	printf("\na[0] is %c",a[0]);
}
