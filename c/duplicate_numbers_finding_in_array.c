//Write a program to find whether the array of integers contains a duplicate number and their count of repetition
#include <stdio.h>
int num_not_in_aray(int ,int[10]);
int elem_pos_in_aray(int,int[10]);
void main(){
	int n,i,index,new_aray_index=0;
	printf("give n\n");
	
	scanf("%d",&n);
	int aray[n],new_aray[n],count_aray[10]={1};
	for (i=0;i<n;i++){
		printf("element %d \n",i);
		scanf("%d",&aray[i]);
	} 
	//make a array of indices of first unduplicated numbers
		//loop over twice,before insertion loop over our new created array to check for existenec
	//then loop over to see how many times each number repeats
	for (i=0;i<n;i++)
			{
		
		
				if( num_not_in_aray(aray[i],new_aray)){
					new_aray[new_aray_index++]=aray[i];
					index=elem_pos_in_aray(aray[i],new_aray);
					count_aray[index]++;
				}
				else {
					index=elem_pos_in_aray(aray[i],new_aray);
					count_aray[index]++;
				}
			}
			printf("now printing new_aray with thier count");
			for(i=0;i<new_aray_index;i++){
				printf("\nelem %d is repetaed %d times",new_aray[i],count_aray[i]);
			}
}
int num_not_in_aray(int elem,int aray[10] ){
	int length = sizeof(aray) / sizeof(aray[0]);
	int p;
	for (p=0;p<length;p++){
		if(elem!=aray[p]){
			continue;
		}
		else{
			return 0;
		}
	}
}
int elem_pos_in_aray(int elem,int aray[10]){
	int length = sizeof(aray) / sizeof(aray[0]);
	int q;
	for (q=0;q<length;q++){
		if(aray[q]==elem){
			return q;
		}
}
}
