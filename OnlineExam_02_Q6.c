#include <stdio.h>
int main(void){
//	variable
	int cNo;
	float marks, discount, fee;
	
//	inputs
	printf("Enter the Course Number (1/2) : ");
	scanf("%d",&cNo);
	
	printf("Enter the Marks you earned : ");
	scanf("%f",&marks);
	
//	selection
	if(cNo==1){
		if(marks<=100 && marks>=80){
			discount=150000*(7.5/100); //calculation discount
			fee=150000-discount; //calculation fee
		}else if(marks<80){
			fee=150000.0; //calculation fee
		}
			
	}else if(cNo==2){
		if(marks<=100 && marks>=80){
			discount=175000*(7.5/100); //calculation discount
			fee=175000-discount; //calculation fee
		}else if(marks<80){
			fee=175000.0; //calculation fee
		}
	}
	
	printf("You earned Discount : %.2f\n",discount);
	printf("Your Course fee : %.2f",fee);
}
