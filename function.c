#include<stdio.h>
 float function(float length ,float breath)
 {	
return(length*breath);
}
int main(void)
{
	float l,b,area;
	printf("enter the length anf breath of rectangle :");
	scanf("%f %f",&l,&b);
	//area =function(l,b) ;
	//printf("area of rectangle : %f",area);
	printf("area of rectangle : %f",function(l,b));
}
