#include<stdio.h>
int addition(int l1,int l2,int l3)
{
	return (l1+l2+l3);
}
int main(void)
{
	int n1;
	int n2;
	int n3;
	int result;
	printf("enter the three number:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
            result= addition(n1,n2,n3);
	    printf("result=%d\n",result);
}            
