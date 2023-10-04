#include <stdio.h>
int main(void){
	int month, units;
	float commission;
	
	printf("Enter the working years : ");
	scanf("%d",&month);
	
	printf("Enter the number of units you sell : ");
	scanf("%d",&units);
	
	if(month>2){
		if(units>100){
			commission=3500.00*units;
		}else if(units>=31 && units<=100){
			commission=2500.00*units;
		}else if(units<=30){
			commission=1000.00*units;
		}
	}
	printf("Commission : %.2f",commission);
	
	return 0;
	
}
