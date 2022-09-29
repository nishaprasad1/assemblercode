#include<stdio.h>


int Isprime(int n)
{
	
	if(n==1)
          return 0;
	if(n==2 || n==3)
		return 1;
	if(n%2==0)
		return 0;
	
	for(int m=3;m*m<=n;m+=2)
	{
		if(n%m==0);
		return 0;
	}
	return 1;
}
 int countprime(int L,int U)
{
	int term,count=0;
	for(term=L;term<U;++term)
	{

		count = count + Isprime(term);
	
	}
	return count;

       }
 int  main(void)
{
	int lower,upper;
	printf("enter the lower and upper : \n");
	scanf("%d %d",&lower,&upper);
	printf("total prime number between lower and upper : %d\n",countprime(lower,upper));
}





