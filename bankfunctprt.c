#include<stdio.h>
 
float SBI(float Y )
{
	
	if(Y==1)
	return 	7.5*Y;
	if(Y==2)
	return 8.5*Y;
	if(Y==3)
	return 9.5*Y;

float simpleInterest(float P ,float (*check) (float))
	
   float count;
   float total=0;
   for(count=1;count<=3;count++)
{
   if(check(count))
	   total =(count*P)/100;
   return total;

int main(void)
{
	float p,y;
	printf("enter the principle  year :\n");
	scanf("%f%f",&p,&y);
	printf("Interest rate : %f"simpleInterest(p,SBI));
	//printf("Interest rate : %f"simpleInterest(p,y,RBI));
	//printf("Interest rate : %f"simpleInterest(p,y,PNB));
}
