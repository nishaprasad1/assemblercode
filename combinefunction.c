#include<stdio.h>
extern float simpleinterest( int ,float,int );
int main(void)
{
	int p,y;
	float r;
	printf("enter the principle rate year :");
	scanf("%d %f %d",&p,&r,&y);
	printf("simple interest = %f \n",simpleinterest(p,r,y));

}
