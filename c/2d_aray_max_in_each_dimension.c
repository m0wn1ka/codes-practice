//. Write a program to read a 2D array marks which stores the marks of five students in three
//subjects. Write a program to display the highest marks in each subject
#include <stdio.h>
void main(){
	int i,j,n1=5,n2=3,max=0;
	int aray[n1][n2];
	for (i=0;i<n1;i++){
		printf("\nstudent %d \n",i+1);
		for(j=0;j<n2;j++){
			printf("subject %d\n",j+1);
			scanf("%d",&aray[i][j]);
		}
	}
	for(j=0;j<n2;j++){
		printf("\ncalculating max in subject %d",j+1);
		max=0;
		for(i=0;i<n1;i++){
		if(aray[i][j]>max){
			max=aray[i][j];
		}	
		}
		printf("\nmax marks are %d ",max);
	}
	
}
