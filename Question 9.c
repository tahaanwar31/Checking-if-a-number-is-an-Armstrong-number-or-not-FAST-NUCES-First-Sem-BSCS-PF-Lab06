#include <stdio.h>
#include <limits.h>
#include <conio.h>
int main()
{
	int number,cube=0,temp,lastdigit;
	printf("Enter a number: \n");
	scanf("%d",&number);
	temp=number;
	while (temp*1!=0) //I am checking here whether all the numbers have been extracted and the remining number is zero or not as anything multiplied by zero is zero
	{
		lastdigit=temp%10;
		cube=cube+(lastdigit*lastdigit*lastdigit);
		temp=temp/10;
	}
	if (cube==number)
	{
		printf("It is an Armstrong number\n");
	}
	else
	{
		printf("It is not an Armstrong number\n");
	}
	
}