/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Harry Hopkinson
 * ID: 201956529
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	if (scanf("%8s", hex) != 1) // checks if input was over 8 characters or if there was an input error
	{
		printf("Error: Invalid input\n");
		return 1;
	}

	// write without using strtol() or sscanf()
	int length = strlen(hex);
	for (int i = 0; i < length; i++)
	{
		char c = hex[length - 1 - i]; // get end character
		int value;

		if (c >= '0' && c <= '9') // convert char to int
		{
			value = c - '0';
		}
		else if (c >= 'A' && c <= 'F') // convert char to int for uppercase letters
		{
			value = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f') // convert char to int for lowercase letters
		{
			value = c - 'a' + 10;
		}
		else
		{
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}

		decimal += value * (1L << (4 * i));
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}