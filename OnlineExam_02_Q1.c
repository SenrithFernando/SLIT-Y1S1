// Document Link : 
// https://drive.google.com/file/d/1YL6cGLuzaLqnYWtgN-wDNdQpA6Z5yNrZ/view?usp=sharing



#include <stdio.h>
int main(void){
	int typeOfCustomer, billAmount, unit, units;
	
	printf("Enter the type of customer (1-Domestic customer / 2-samurdhi customer) : ");
	scanf("%d",&typeOfCustomer);
	
	printf("Enter the Units : ");
	scanf("%d",&unit);
	
	if(typeOfCustomer==1){
		if(unit>100){
			billAmount=(100*10)+((unit-100)*30)+((unit-100)*(20/100));
		}else{
			billAmount=(unit*10);
		}
	}else if(typeOfCustomer==2){
		if(unit>100){
			billAmount=(100*10)+((unit-100)*30);
		}else{
			billAmount=(unit*10);
		}
	}else{
		printf("Invalid Customer ");
	}
	
	printf("Your Bill amount is : %d",billAmount);
}
