#include <stdio.h>
float calcPayment(int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);
int i;


    int main(void){
    int ptype;
    float totaldata;
    for(i=1;i<=3;i++){

    printf("Package type : ");
    scanf("%d",&ptype);

    printf("Total Data Usage (in mb) : ");
    scanf("%f",&totaldata);


    if(ptype<4 && ptype>0){
        calcPayment(ptype,totaldata);
    }else{
        printf("Error Type\n\n");
        i--;
    }



}
}


float calcPayment(int pType, float totalData){
    float payment, EUC, EDC, DB, MSP, EUCmb, tax;

    if(pType==1){
        DB=1536;
        MSP=120.0;
        EUCmb=2.0;
        //printf("1 : ");
        //printf("MSP IS %.2f\n",MSP);
    }else if(pType==2){
        DB=5120;
        MSP=350.0;
        EUCmb=1.5;
        printf("2 : ");
    }else if(pType==3){
        DB=10240;
        MSP=660.0;
        EUCmb=1.0;
        printf("3 : ");
    }else if(pType==4){
        DB=20480;
        MSP=1200;
        EUCmb=0.5;
        printf("4 : ");
    }

    if(totalData>DB){
        EDC=totalData-DB;
        EUC=EDC*EUCmb;
        payment=EUC+MSP;
    }else if(totalData<DB){
        //EDC=totalData;
        //EUC=EDC*EUCmb;
        payment=MSP*(totalData/1024.0);
    }else{
        payment=MSP;
    }

    //printf("Payment : %.2f",payment);
    calcTax(payment);

    return 0;


}

float calcTax(float payment){
    float tax;

    tax=payment*(5.0/100);

    displayDetails(payment,tax);
}


void displayDetails(float payment,float Tax){

    float MBP;
    MBP=payment+Tax;
    printf("\nPayment \t Tax amount \t Monthly bill Payment");
    printf("\n%.2f \t %.2f \t\t %.2f ",payment, Tax, MBP);
    printf("\n\n");
}

