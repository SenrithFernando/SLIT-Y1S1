#include <stdio.h>
//craete functions
float circleArea(int r);
float circlePeri(int r);
float recArea(int width, int length);

int main(void){
	float areaOfCircle, perimeterOfCircle, areaOfRectangle, area;
	int  rad, h, PerimeterOfCircle; 
	
	printf("Enter radious of circle in cylinder : ");
	scanf("%d",&rad);
	
	printf("Enter height : ");
	scanf("%d",&h);
	
//	call to function

	areaOfCircle=circleArea(rad);
	perimeterOfCircle=circlePeri(rad);
	
	PerimeterOfCircle=perimeterOfCircle;
	
	areaOfRectangle=recArea(h,PerimeterOfCircle);
	
	area=(2*areaOfCircle)+areaOfRectangle;
	printf("Area of Cylinder : %.2f",area);
}

float circleArea(int r){
	float Area;
	
	Area=((22/7)*r*r);
	
	return Area;
}

float circlePeri(int r){
	float perimeter;
	
	perimeter=(2*(22/7)*r);
	
	return perimeter;
}

float recArea(int width, int length){
	float Area;
	
	Area=width*length;
	
	return Area;
}
