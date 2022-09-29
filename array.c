#include<stdio.h>

 int year[] ={31,28,31,30,31,30,31,31,30,31,30,31};
int main(void)
{	
	int month=0;
        printf("enter the month : ");
        scanf("%d",&month);
	if(month<=12)
	{

             printf("no of days=%d \n",year[month-1]);
	}
	else
	printf("exceed the month ");
    
}
