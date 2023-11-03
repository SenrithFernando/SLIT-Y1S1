#include <stdio.h>

int main(void){
    FILE* fileWrite;
    char name[100];

    fileWrite=fopen("SFViews.txt","w"); //create file

    printf("Enter your full name : "); // get input
    gets(name);

    fprintf(fileWrite,name); //
    fclose(fileWrite);

    return 0;
}
