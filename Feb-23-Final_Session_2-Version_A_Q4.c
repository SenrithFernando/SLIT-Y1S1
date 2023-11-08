#include <stdio.h>

int main(void){
int i, counts, hB, hN, fB, fN, sB, sN;
char mov, type;

FILE *fileIns;

fileIns=fopen("ticket.dat","w");

if(fileIns==NULL){
    printf("Unble to read file.\n");
    return -1;
}

for(i=0; i<5; i++){
    printf("Purchase : %d\n",i+1);

    printf("Select the movie | Harry Portor (H)| Frozon -11 (F) | Sherlock Homes (S) : ");
    scanf(" %c",&mov);

    printf("Select ticket (Balkony B | Normal N) : ");
    scanf(" %c",&type);

    printf("Select ticket Count : ");
    scanf("%d",&counts);

    printf("\n");

    if(mov=='H' && type=='B'){
        hB=hB+counts;
    }else if(mov=='H' && type=='N'){
        hN=hN+counts;
    }else if(mov=='F' && type=='B'){
        fB=fB+counts;
    }else if(mov=='F' && type=='N'){
        fN=fN+counts;
    }else if(mov=='S' && type=='B'){
        sB=sB+counts;
    }else if(mov=='S' && type=='N'){
        sN=sN+counts;
    }


    fprintf(fileIns,"%c\t", mov);
    fprintf(fileIns,"%c\t", type);
    fprintf(fileIns,"%d\t\n", counts);


}
fclose(fileIns);

printf("Harry Potter\n");
printf("\tBalcony - %d\n",hB);
printf("\tNormal - %d\n",hN);
printf("Frozen II\n");
printf("\tBalcony - %d\n",fB);
printf("\tNormal - %d\n",fN);
printf("Sherlock Homes\n");
printf("\tBalcony - %d\n",sB);
printf("\tNormal - %d\n",sN);

return 0;

}
