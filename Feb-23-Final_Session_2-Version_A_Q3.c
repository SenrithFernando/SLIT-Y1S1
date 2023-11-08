#include <stdio.h>
#include <assert.h>

    float calpayment(int age, float size);
    float calcsubsidy(float payment);
    void displayDetails(float payment, float subsidy);

int main(void){
    int age, i;
    float area;

    for(i=0;i<3;i++){
        printf("The age of the paddy crops in week : ");
        scanf("%d",&age);

        printf("The paddy field size in Hectare : ");
        scanf("%f",&area);

        if(age>7){
            printf("Check your paddy age.\n");
            continue;
            return -1;
        }
        calpayment(age, area);

    }



    return 0;
}

float calpayment(int age, float size){
    float urea, tsp, mop, ureaP, tspP, mopP, tot;

    if(age>=0 && age<2){
        urea=0.0;
        tsp=35.0;
        mop=0.0;

        ureaP=urea*size;
        tspP=tsp*size;
        mopP=mop*size;

        tot=ureaP+tspP+mopP;
    }else if(age>=2 && age<4){
        urea=30.0;
        tsp=0.0;
        mop=0.0;

        ureaP=urea*size;
        tspP=tsp*size;
        mopP=mop*size;

        tot=ureaP+tspP+mopP;

    }else if(age>=4 && age<6){
        urea=65.0;
        tsp=0.0;
        mop=25.0;

        ureaP=urea*size;
        tspP=tsp*size;
        mopP=mop*size;

        tot=ureaP+tspP+mopP;

    }else if(age==6){
        urea=50.0;
        tsp=0.0;
        mop=25.0;

        ureaP=urea*size;
        tspP=tsp*size;
        mopP=mop*size;

        tot=ureaP+tspP+mopP;

    }else if(age>7){
        urea=30.0;
        tsp=0.0;
        mop=0.0;

        ureaP=urea*size;
        tspP=tsp*size;
        mopP=mop*size;

        tot=(ureaP+tspP+mopP)*1.0;

    }

    calcsubsidy(tot);
}

float calcsubsidy(float payment){
    float subsid, pay;

    pay=payment;
    subsid=payment*(15/100.0);

    displayDetails(pay,subsid);

}

void displayDetails(float payment, float subsidy){
    float payableAmount;

    payableAmount=payment-subsidy;

    printf("\n\nPayable amount \t Subsidy amount\n");
    printf("%.2f \t\t %.2f\n\n",payableAmount, subsidy);

    return 0;

}


