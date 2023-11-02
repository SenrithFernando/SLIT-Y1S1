#include <stdio.h>

int main(void){
    float rainfall[7]={};
    int i;
    float max, min, avg, tot;
    max=0;

    for(i=0;i<7;i++){
        printf("\n\nEnter rainfall : ");
        scanf("%f",&rainfall[i]);



    }
    for(i=0;i<7;i++){
        if(max<=rainfall[i]){
            max=rainfall[i];
        }

        if(i==0){
            min=max;
        }


        if(min>=rainfall[i]){
            min=rainfall[i];
        }

        tot=tot+rainfall[i];

        printf("\n\nDay 1 to %d",i+1);
        printf("\nAverage rainfall : %.2f",tot/(i+1));
        printf("\nMaximum rainfall : %.2f",max);
        printf("\nMin rainfall : %.2f",min);
    }

    return 0;

}
