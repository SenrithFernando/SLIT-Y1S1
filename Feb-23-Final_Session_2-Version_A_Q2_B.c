#include <stdio.h>
int main(void){
    int Smatrix[4][4]={0};
    int i, j, tot=0;

    for(i=0;i<4;i++){
    printf("\nValues for row %d\n",i+1);
        for(j=0;j<4;j++){
            printf("Enter Element %d : ",j+1);
            scanf("%d",&Smatrix[i][j]);

        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(Smatrix[i][j]==Smatrix[j][i]){
                tot=tot+1;
                //printf("%d",tot);
            }
        }
    }

    if(tot==16){
        printf("\n\nThis is symmetric matrix \n");
    }else {
        printf("\n\nThis is not symmetric matrix \n");
    }


}
