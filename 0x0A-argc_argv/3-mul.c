#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

int num1, num2, mul;


if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1  *num2;
printf("%d\n", mul);
}
return (0);
}
