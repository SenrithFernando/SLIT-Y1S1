// a) Create a file called “number.dat” using the file editor.
// b) Type set of numbers and save those in the file.
// a. e.g : 21 43 76 98 40

#include <stdio.h>

int main(void){

    FILE *filePointer; //pointer to file

    filePointer=fopen("number.dat","a+"); //open the file

    if(filePointer==NULL){
        printf("Unable to open the file.\n");
        return -1;
    }

    int num, numFrmFile, flag=0;

    printf("Enter number : ");
    scanf("%d",&num);

    while(fscanf(filePointer, "%d", &numFrmFile)==1){
        if(num==numFrmFile){
            printf("%d is already there in the file > number.dat", num);
            flag=1;
            break;
        }
    }

    if(flag==0){
        fprintf(filePointer,"%d",num);
        printf("Number is added to the file",num);
    }

    fclose(filePointer); //closing file

    return 0;
}
