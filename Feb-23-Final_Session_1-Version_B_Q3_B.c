#include <stdio.h>
int main(void){
float sales[2][3]={0};
int i,j;

for(i=0;i<2;i++){
    printf("Sales Person : %d\n",i+1);
    for(j=0;j<3;j++){
        printf("Enter Amount Product %d : ",j+1);
        scanf("%f",&sales[i][j]);
    }
}


for(i=0;i<2;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%.2f\t",sales[i][j]);

    }
}

}
