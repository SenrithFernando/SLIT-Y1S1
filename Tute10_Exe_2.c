#include <stdio.h>
#include <string.h>

int main(void){

    FILE *filePointer;

    filePointer=fopen("appointment.dat", "w"); //create file

    //check if file is available
    if(filePointer==NULL){
        printf("Unable to open file.\n");
        return -1;
    }

    char name[15], appType, nameFrmFile[100];
    int i, consulting=0, scanning=0, testing=0;

    for(i=0; i<2; i++){
        printf("Enter the name : ");
        scanf("%s", name);

        fprintf(filePointer, "%s \t\t", name);

        printf("Enter the appointment type (C-counsulting S-scanning T-testing) : ");
        scanf(" %c", &appType);
        //getchar();
        //appType=getchar();

        fprintf(filePointer, "%c \n", appType);

    }

    fclose(filePointer);

    filePointer=fopen("appointment.dat", "r");

    //check if file is available
    if(filePointer==NULL){
        printf("Unable to open file.\n");
        return -1;
    }

    while(fscanf(filePointer, "%s", nameFrmFile)==1){
        if(strlen(nameFrmFile)==1 && nameFrmFile[0]=='C'){
            consulting++;
        }else if((strlen(nameFrmFile)==1 && nameFrmFile[0]=='S' )){
            scanning++;
        }else if((strlen(nameFrmFile)==1 && nameFrmFile[0]=='T' )){
            testing++;
        }
    }

    fclose(filePointer);

    printf("\nAppointment Type\t Number of Patients\n");
    printf("Consulting\t\t %d\n",consulting);
    printf("Scaning\t\t\t %d\n",scanning);
    printf("Testing\t\t\t %d\n",testing);



    return 0;
}
