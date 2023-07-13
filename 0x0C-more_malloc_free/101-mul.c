#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 */
void multiply(char *num1, char *num2)
{
	int len1, len2, len, i, j, carry;
	int *result;

	len1 = 0;
	while (num1[len1])
	{
		if (!isdigit(num1[len1]))
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}

	len2 = 0;
	while (num2[len2])
	{
		if (!isdigit(num2[len2]))
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}

	len = len1 + len2;
	result = calloc(len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len - 1)
		i++;

	for (; i < len; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

