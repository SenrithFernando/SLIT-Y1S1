#include <stdio.h>

int main(void){
    int numArr[8]={0};
    int i, n, def, j;

    for(i=0; i<8; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&numArr[i]);
    }

    printf("\nNumbers you entered \n");
    for(i=0; i<8; i++){
        printf("%d\t",numArr[i]);
    }

    printf("\nEnter how many number move right : ");
    scanf("%d",&n);


    for(i=0; i<n; i++){
        def=numArr[7];
        for(j=6; j>=0; j--){
            numArr[j+1]=numArr[j];
        }
        numArr[0]=def;

    }

    printf("\nAfter %d possion right \n",n);
    for(i=0; i<8; i++){
        printf("%d\t",numArr[i]);
    }

}
