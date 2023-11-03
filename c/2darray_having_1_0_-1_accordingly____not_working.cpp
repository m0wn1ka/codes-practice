//Write a program to fill a square matrix with value zero on the diagonals, 1 on the upper
//right triangle, and –1 on the lower left triangle.
#include <stdio.h>
void main(){
	int n1=3,n2=4,i,j;

	
	int aray[5][5];
	for (i=1;i<=n1;i++){
		for(j=1;j<=n2;j++){
			if(i==j){
				aray[i][j]=0;
			}
			if(i<j){
				aray[i][j]=1;
			}
			else{
				aray[i][j]=-1;
			}
		}
	}
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=n2;j++){
			printf("%d\t",aray[i][j]);
		}
	}
}
