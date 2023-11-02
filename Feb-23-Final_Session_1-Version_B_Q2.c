#include <stdio.h>
int main(void){
    int empCat, workDays;
    float dailyPayment,basicSal,bonus;
    char cont;

    cont='y';

    while(cont=='y'||cont=='Y'){
        printf("Enter Employee Category : ");
        scanf("%d",&empCat);

        if(empCat==1){
            printf("Input Your Basic Salary : ");
            scanf("%f",&basicSal);

            printf("Input Your Working Days : ");
            scanf("%d",&workDays);

            bonus=basicSal*workDays*1.0;
        }else if(empCat==2){
            printf("Input Your Working Days : ");
            scanf("%d",&workDays);

            printf("Input Your Daily Salary : ");
            scanf("%f",&dailyPayment);

            if(workDays>25){
                bonus=dailyPayment*20.0;
            }

        }else if(empCat==3){
            bonus=50000.0;
        }else{
            printf("Error Employee Category");
        }



        printf("Bonus : %.2f\n\n",bonus);


        printf("Do you want to continue_ ? (Y/N) : ");
        scanf(" %c",&cont);
        printf("\n");
    }
}
