#include <stdio.h>
#include <string.h>
void main(){
	char s[100],s2[100];
	printf("give string:");
	scanf("%s",s);
	int i,len;
	i=len=strlen(s)-1;
	printf("i is %d \n",i);
	int j=0;
	char temp="a";
	
	while (j<i){
	temp=s[j];
	s[j]=s[i];
	s[i]=temp;
	j++;
	i--;
	}
	puts("s is ");
	puts(s);
}
