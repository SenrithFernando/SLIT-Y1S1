#include <stdio.h>
int main(void){
	int type, days;
	float price, fine, rental;
	
	printf("enter book type (computer related-1 / others-2) : ");
	scanf("%d",&type);
	
	printf("enter no of days the book rented : ");
	scanf("%d",&days);
	
	if(type==1){
		
		rental=10.00;
		
		if(days>14){ 
			fine=days*(rental*(10/100.0));
			price=(rental*days)+fine;
		}else{
			price=rental*days;
		}
	}else if(type==2){
		
		rental=8.00;
		
		if(days>14){
			fine=days*(rental*(10/100.0));
			price=(rental*days)+fine;
		}else{
			price=rental*days;
		}
	}	
	
	printf("Rental per day : %.2f\n",rental);
	printf("Rental amount : %.2f",price);
}
