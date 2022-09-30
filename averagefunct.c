#include<stdio.h>
int average(int A,int B,int* SUB)
{       

     *SUB =(A>B)?(A-B):(B-A);
return (A+B)/2;
}

int main(void)
{
     int a,b,c,d;
     printf("enter the two  number:\n");
     scanf("%d%d",&a,&b);
          c =average(a ,b,&d);
	  printf("%d %d\n",c,d);
                       }
