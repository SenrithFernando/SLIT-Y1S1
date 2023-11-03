#include <stdio.h>

int main(void){
    FILE* fileread;
    char name[50];

    fileread=fopen("SFViews.txt","r");

    while(!feof(fileread)){
        fgets(name,50,fileread);
        puts(name);
    }

    return .0;
}
