#include <stdio.h>

int main(void){
    int count;
    char pckg,aservice,yn;
    float ppp, price, asc=0, totasc=0;


    printf("Select your package (G-Gold S-Silver B-Bronze): ");
    scanf(" %c",&pckg);

    printf("Enter Count of Participation : ");
    scanf("%d",&count);

    if(pckg=='G'||pckg=='g'){
        ppp=20000.0;
    }else if(pckg=='s'||pckg=='S'){
        ppp=15000.0;
    }else if(pckg=='b'||pckg=='B'){
        ppp=10000.0;
    }

    printf("If you want additional service (Y/N) : ");
    scanf(" %c",&yn);

    while(yn=='y'||yn=='Y'){

        printf("Select Additional Services (C-Camping V-YalaVsist E-NightEvent) : ");
        scanf(" %c",&aservice);

        if(aservice=='C'||aservice=='c'){
            asc=5000.0;
        }else if(aservice=='v'||aservice=='V'){
            asc=7500.0;
        }else if(aservice=='E'||aservice=='e'){
            asc=10000.0;
        }

        totasc=totasc+asc;

        printf("If you want additional service (Y/N) : ");
        scanf(" %c",&yn);

    }

    if(count>10){
        price=(ppp*count)-((ppp*count)*(10/100.0))+totasc;
    }else{
        price=(ppp*count)+totasc;
    }



   printf("Total Amount to be paid : Rs. %.2f",price);





}
