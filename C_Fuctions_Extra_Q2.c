#include <stdio.h>
float invoice1(int qty1);
float invoice2(int qty2);
float invoice3(int qty3);


int main(void){
	int ItmCode, Itmqty;
	float tot, fulltot;
	
//	ItmCode=1;
	
	while(ItmCode=-1){
		
	printf("Enter the Item Code : ");
	scanf("%d",&ItmCode);
			

		if(ItmCode==1){
			printf("Enter the Quantity : ");
			scanf("%d",&Itmqty);
			tot=invoice1(Itmqty);
			fulltot=fulltot+tot;
		}else if(ItmCode==2){
			printf("Enter the Quantity : ");
			scanf("%d",&Itmqty);
			tot=invoice2(Itmqty);
			fulltot=fulltot+tot;
		}else if(ItmCode==3){
			printf("Enter the Quantity : ");
			scanf("%d",&Itmqty);
			tot=invoice3(Itmqty);
			fulltot=fulltot+tot;
		}else if(ItmCode==-1){
			printf("\n\nEnd Program\n");
			break;
		}else{
			printf("Eror Item Code\n");
		}
		
	
	printf("Price Each : %.2f\n",tot);	
	}
	
	
	
	printf("Full price : %.2f",fulltot);
	
	return 0;

}

float invoice1(int qty1){
	
	return 300.00*qty1;
	}
	
float invoice2(int qty2){
	
	return 450.00*qty2;
	}
	
float invoice3(int qty3){
	
	return 500.00*qty3;
	}
	
