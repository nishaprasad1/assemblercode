#include<stdio.h>
struct student
{
	int rollno;
	char grade;
	float percentage;
};

int main()
{
  struct student std;
  printf("Enter student roll no : ");
  scanf("%d",&rollno);

  printf("Enter student grade : ");
  scanf("%c",&grade);

  printf("Enter student percentage : ");
  scanf("%d",&percentage);


  return 0;
}
