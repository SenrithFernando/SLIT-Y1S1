#include <stdio.h>
float circleArea(int r);
float circlePeri(int r);
float recArea(int width, int length);
float cylArea(int r, int height);

int main(void){
	char selectfun;
	float Area, Perimeter;
	int radous, wid, len, hei;
	
	printf("Select What You Want (Area of circle - A / Perimeter of circle - B / Area of rectangle - C / Area of a cylinder - D) : ");
	scanf(" %c",&selectfun);
	
	if(selectfun=='A' || selectfun=='a'){
		printf("Enter Radious of circle : ");
		scanf("%d",&radous);
		
		Area=circleArea(radous);
		printf("Area of circle : %lf",Area);
		
	}else if(selectfun=='B' || selectfun=='b'){
		printf("Enter Radious of circle : ");
		scanf("%d",&radous);
		
		Perimeter=circlePeri(radous);
		printf("Perimeter of circle : %lf",Perimeter);
	}else if(selectfun=='C' || selectfun=='c'){
		printf("Enter width of rectangle : ");
		scanf("%d",&wid);
		
		printf("Enter lenght of rectangle : ");
		scanf("%d",&len);
		
		Area=circleArea(win,len);
		printf("Area of rectangle : %lf",Area);
	}else if(selectfun=='D' || selectfun=='d'){
		printf("Enter radious of cylinder : ");
		scanf("%d",&r);
		
		printf("Enter height of cylinder : ");
		scanf("%d",&hei);
		
		Area=cylArea(r,hei);
		printf("Area of rectangle : %lf",Area);
	}
	
	return 0;
}

float circleArea(int r){
	return ((22/7)*r*r);
}

float circlePeri(int r){
	return (2*(22/7)*r);
}

float recArea(int width, int length){
	return ((2*width)+(2*length));
}

float cylArea(int r, int height){
	return ((2*(22/7)*r*height)+(2*(22/7)*r*r));
}
