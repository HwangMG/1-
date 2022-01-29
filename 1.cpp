#include<stdio.h>;
#include<stdbool.h>
int main()
{


	/*
	출력 결과물
현재 레벨 : 10
현재 레벨 : 11
현재 레벨 : 12
현재 레벨 : 13
현재 레벨 : 14
현재 레벨 : 15
현재 레벨 : 17
현재 레벨 : 19
현재 레벨 : 21
	*/

	int level;

	level = 10;



	printf("현재 레벨 : %d\n", level);


	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); // 11

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); // 12 

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //13

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //14

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //15

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //17

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //19

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("현재 레벨 : %d\n", level); //21


	printf("\n");

}