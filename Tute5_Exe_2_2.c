#include <stdio.h>
int main(void){
	int x;
	
	x=10;
	
	do{
		printf("%d\n",x);
		x--;
	}while (x>1);
	
	return 0;
}


//x=10;
//Out put
//10
//9
//8
//7
//6
//5
//4
//3
//2



// x=1 , (i) & (ii) both outputs are null ;
// x=10, (i) & (ii) both outputs are 10, 9, 8, 7, 6, 5, 4, 3, 2 ;
