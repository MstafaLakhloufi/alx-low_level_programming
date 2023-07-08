#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
