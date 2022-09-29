#include<stdio.h>
int main()
{
	float length;
	float breath;
	float hiegth;
	float payment;
	int count;
	printf("enter the length : ");
	scanf("%f",&length);
	printf("enter the breath : ");
	scanf("%f",&breath);
	printf("enter the heigth : ");
	scanf("%f",&hiegth);
	printf("enter the count :");
	scanf("%d",&count);
	payment =10*length*breath*hiegth*count;
	printf("total payment = %f ",payment);
	return 0;
	
}
	
