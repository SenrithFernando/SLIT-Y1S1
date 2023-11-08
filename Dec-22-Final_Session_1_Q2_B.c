#include <stdio.h>

int main(void){
    int identityArr[4][4]={0};
    int i, j, temp1, temp2, cont1, cont2;

    for(i=0; i<4; i++){
    printf("Values for row %d \n",i+1);
        for(j=0; j<4; j++){
            printf("Enter element %d : ",j+1);
            scanf("%d",&identityArr[i][j]);
        }
    }

    for(i=0; i<4; i++){
    printf("\n");
        for(j=0; j<4; j++){
            printf("%d\t",identityArr[i][j]);
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
        if(i==j){
            temp1=identityArr[i][i];

            if(temp1==1){
                cont2++;
            }
            continue;
        }
            temp1=identityArr[i][j];
            temp2=identityArr[j][i];

            if(temp1==temp2 && temp1==0 && temp2==0){
                cont1++;
            }


        }
    }
    printf("\n\n%d\n",cont1);
    printf("%d\n\n",cont2);

    if(cont1==12 && cont2==4){
        printf("This is Identity matix.\n");
    }else{
        printf("This is not Identity matrix.\n");
    }

}



//There may be other methods besides this one.
