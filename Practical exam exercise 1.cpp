#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	float p,s;
	printf("Input a=");
	scanf("%f",&a);
	printf("Input b=");
	scanf("%f",&b);
	printf("Input c=");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		//Heron's formula for calculating the area of triangle
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Area of the triangle %.2f", s);
	}else{
		printf("Error ! These values are not the edges of a triangle.");
	}
}
