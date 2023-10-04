#include <stdio.h>
int main(void){
	int typeOfCustomer, bill ;
	float discountamount, totalBill ;
	
	printf("Enter the type of customer (loyal customer-1/ nonloyal customer-2) : ");
	scanf("%d",&typeOfCustomer);
	
	printf("Enter the price of bill : ");
	scanf("%d",&bill);
	
	if(typeOfCustomer==1){
		if(bill<=2500){
			discountamount=(bill*(0.05));
			totalBill=bill-(discountamount);
		}else{
			discountamount=(bill*(0.1));
			totalBill=bill-(discountamount);
		}
		
		printf("Discount Amount : %.2f\n",discountamount);
		printf("Total Bill Amount : %.2f",totalBill);
	}
	else if(typeOfCustomer==2){
		if(bill>5000){
			discountamount=bill*(0.1);
			totalBill=bill-(discountamount);
		}
		
		printf("Discount Amount : %.2f\n",discountamount);
		printf("Total Bill Amount : %.2f",totalBill);
	}
	
	 return 0;
}
