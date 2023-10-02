#include <stdio.h>
float pack(int packNo);

int main(void){
	int packageNo;
	float fullamount;
	
	printf("Select your package (pk1-1 / pk2-2 / pk3-3 ) : ");
	scanf("%d",&packageNo);
	
	
	fullamount= pack(packageNo);
	

	printf("Full Amount : %.2f",fullamount);
	
}

float pack(int packNo){
	float amount;
	
	if(packNo==1){
		amount=8000 - (8000*3/100);
		return amount;
	}else if(packNo==2){
		amount=9500- (9500*5/100);
		return amount;
	}else if(packNo==3){
		amount=12500- (12500*7/100);
		return amount;
	}else{
		printf("Eror \n");
		return;
	}
}
