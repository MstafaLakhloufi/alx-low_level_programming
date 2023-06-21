#include "main.h"

/**
 * num_length - returne the length of string
 * @num: operznd number
 * Return: number of digits
 */

int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main -Entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (success)
 */

int main(void)
{
	int counter, initial0s;
	unsigned long fib1 = 1, fib2 = 2, sum,
		      max = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (counter = 1; counter <= 98; counter++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = num_length(max) - 1 - mun_length(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumo = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (counter != 98)
			printf(', ');
		else
			printf("\n");
	}

	return (0);

}
