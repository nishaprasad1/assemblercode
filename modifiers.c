#include<stdio.h>
 int main()
{
	int a,b, r,s,t;
	printf("enter the value of a and b : \n");
	scanf("%d %d",&a,&b);
                   
	r = (a++)  + (b--) ; //3 3  =>  5
	printf("%d %d %d\n",a,b,r);
	s= (a--)  + (++b);
	printf("%d %d %d\n",a,b,s);
	t = (++a)  + (--b);
	printf("%d %d %d\n",a,b,t);
	return 0;
}
