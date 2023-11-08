#include <stdio.h>

int main(void){

    FILE *filePointer;

    filePointer=fopen("outletOrders.dat","w");

    if(filePointer==NULL){
        printf("Unable to open file.\n");
        return -1;
    }


    int x=100, qty=0, vRCount=0, vLCount=0, cRCount=0, cLCount=0, sRCount=0, sLCount=0;
    char type, size,nameFrmFile[100];

    while(qty!=-99){


        printf("Select type of pizza (V/C/S) : ");
        scanf(" %c",&type);



        printf("Select size of pizza (R/L) : ");
        scanf(" %c",&size);


        printf("Select Qty of pizza : ");
        scanf("%d",&qty);

        if(qty==-99){
            break;
        }

        if(type=='V' && size=='R'){
            vRCount=vRCount+qty;
        }else if(type=='V' && size=='L'){
            vLCount=vLCount+qty;
        }else if(type=='C' && size=='R'){
            cRCount=cRCount+qty;
        }else if(type=='C' && size=='L'){
            cLCount=cLCount+qty;
        }else if(type=='S' && size=='R'){
            sRCount=sRCount+qty;
        }else if(type=='S' && size=='L'){
            sLCount=sLCount+qty;
        }

        fprintf(filePointer, "%d\t\t", x);
        fprintf(filePointer, "%c\t\t",type);
        fprintf(filePointer, "%c\t\t",size);
        fprintf(filePointer, "%d \n",qty);

        x+=1;
    }

    fclose(filePointer);

    // Generate the summary
      printf("\nVeggie Pizza\n");
      printf("\tRegular\t-%d\n",vRCount);
      printf("\tLarge\t-%d\n",vLCount);

      printf("Chicken Pizza\n");
      printf("\tRegular\t-%d\n",cRCount);
      printf("\tLarge\t-%d\n",cLCount);

      printf("Seafood Pizza\n");
      printf("\tRegular\t-%d\n",sRCount);
      printf("\tLarge\t-%d\n",sLCount);



    return 0;

}
