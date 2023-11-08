#include <stdio.h>

int main(void){
    int line, i, j;
    char charc1, charc2;

    printf("Enter 1 character : ");
    scanf(" %c",&charc1);

    printf("Enter 2 character : ");
    scanf(" %c",&charc2);

    printf("Enter lines : ");
    scanf("%d",&line);

    for(i=0; i<line; i++){
       for(j=0; j<=i; j++){
            if(j%2==0){
                printf(" %c",charc1);
            }else if(j%2!=2){
                printf(" %c",charc2);
            }
        }
        printf("\n");
    }
}
