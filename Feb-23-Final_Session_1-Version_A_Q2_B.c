#include <stdio.h>

int main(void){
    float sales[2][3]={0};
    int i,j, tot, maxsaleid;
    float maxsale;


    for(i=0; i<2; i++){

        printf("Sales Person : %d\n",i+1);
        for(j=0; j<3; j++){
            printf("Enter Product %d : ",j+1);
            scanf("%f",&sales[i][j]);
        }
    }

    printf("\n");

    for(i=0; i<2; i++){

        printf("Sales Person : %d\n",i+1);
        for(j=0; j<3; j++){
            printf("Product %d  : %.2f\n",j, sales[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
          tot=tot+sales[i][j];
        }
        if(maxsale<tot){
            maxsale=tot;
            maxsaleid=i+1;
        }

    }

    printf("Max sales person is person %d ",maxsaleid);
}
