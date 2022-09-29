#include<stdio.h>
int main(void)
{
	int marks,grade;
	printf("enter the marks : ");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("congrats you  pass with distinction \n ");
                printf("topper of class\n");}

	else if(marks>=60)
	{
		printf("congrats you pass with 1st class \n");
	}
	else if(marks>=50)
	{
		printf("congrats you with 2nd class \n");
	}
	else if (marks>=33)
	{
		printf("congrats passed \n");
	}
	else
	{
		printf("sorry you have failed \n");
	}
}
