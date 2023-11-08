#include <stdio.h>

int main(void){
    int i, q1, q2, q3, q4, flag=0, corect=0;
    char id[9]={0};
    char fileFrmDta;

    FILE *fileQ;

    fileQ=fopen("fileQuiz.dat","w+");

    if(fileQ==NULL){
        printf("Cant open file.\n");
        return -1;
    }

    for(i=0; i<5; i++){
        flag=0;

        printf("\nEnter %d student id : ",i+1);
        scanf("%s",id);

        printf("\tEnter answer of Q1 : ");
        scanf("%d",&q1);

        printf("\tEnter answer of Q2 : ");
        scanf("%d",&q2);

        printf("\tEnter answer of Q3 : ");
        scanf("%d",&q3);

        printf("\tEnter answer of Q4 : ");
        scanf("%d",&q4);

        while(fscanf(fileQ,"%s",fileFrmDta)==1){
        if(id==fileFrmDta){
            printf("Id Number is entered earlier.\n");
            flag=1;
            continue;
            }
        }
        fprintf(fileQ,"%s\t\t",id);
        fprintf(fileQ,"%d",q1);
        fprintf(fileQ,"%d",q2);
        fprintf(fileQ,"%d",q3);
        fprintf(fileQ,"%d\n",q4);

        if(q1==1){
            corect++;
        }

        if(q2==4){
            corect++;
        }

        if(q3==2){
            corect++;
        }

        if(q4==3){
            corect++;
        }

        printf("\nSt. Id : %s\n",id);
        printf("Number of correct answers : %d\n",corect);


    }


}



//There may be other methods besides this one.
