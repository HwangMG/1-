#include<stdio.h>;
#include<stdbool.h>
int main()
{


	/*
	��� �����
���� ���� : 10
���� ���� : 11
���� ���� : 12
���� ���� : 13
���� ���� : 14
���� ���� : 15
���� ���� : 17
���� ���� : 19
���� ���� : 21
	*/

	int level;

	level = 10;



	printf("���� ���� : %d\n", level);


	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); // 11

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); // 12 

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //13

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //14

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //15

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //17

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //19

	if (level <= 14)
	{
		level += 1;
	}
	else
	{
		level += 2;
	}
	printf("���� ���� : %d\n", level); //21


	printf("\n");

}