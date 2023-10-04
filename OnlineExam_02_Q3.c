#include <stdio.h>
int main(void){
	int months;
	float basicSalary, bonus, salary;
	
	printf("Enter the months worked : ");
	scanf("%d",&months);
	
	printf("Enter the Basic Salary : ");
	scanf("%f",&basicSalary);	
	
	if(months>6){
		bonus=months*basicSalary*1.0;
	}else{
		bonus=0.0;
	}
	
	if(months==12){
		if(basicSalary<=45000){
			bonus=basicSalary+(bonus/months);
		}
	}
	
	printf("Bonus : %.2f",bonus);
}
