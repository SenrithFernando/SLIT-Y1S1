#include <stdio.h>
int main(void){
	int product, users;
	float price;
	
	printf("Choose the Product (1/2) : ");
	scanf("%d",&product);
	
	printf("Enter the Number of Customers : ");
	scanf("%d",&users);
	
	if(product==1 && users<=100 && users>0){
		price=users*15.50;
	}else if(product==1 && users>100){
		price=((users-100)*25.00)+(100*15.50);
	}else if(product==2 && users<=100 && users>0){
		price=users*25.50;
	}else if(product==2 && users>100){
		price=((users-100)*35.00)+(100*25.50);		
	}
	
	printf("Amount to be paid : %.2f",price);
	return 0;
}
