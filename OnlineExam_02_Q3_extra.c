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
	}else if(months<6){
		bonus=0.0;
	}else if(months==12){
		bonus=basicSalary+(basicSalary*1);
	}
	
	
	printf("Bonus : %.2f",bonus);
}
