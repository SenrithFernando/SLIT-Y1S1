#include <stdio.h>
int main(void){
	float rainfall[12];
	int i,j;
	float max, min;
	
//	input data to array
	
	for(i=0;i<12;i++){
		j=i;
		printf("Enter the Monthly average %d : ",++j);
		scanf("%f",&rainfall[i]);
	}
	
//	input data to array


//	output max data from array

	for(i=0;i<12;i++){
		
		if(max<rainfall[i]){
			max=rainfall[i];
		}
		
	}
	printf("Max no : %.2f",max);
	
//	output max data from array

//	output min data from array	

	min=max;
	
	for(i=0;i<12;i++){
		if(min>rainfall[i]){
			min=rainfall[i];
		}
	}

	printf("Min no : %.2f",min);
	
//	output min data from array		
	return 0;
	
}
