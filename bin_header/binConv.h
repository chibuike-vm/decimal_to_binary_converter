#ifndef _BINCONV_H_
#define _BINCONV_H_

/**
 * deciToBinConv - Converts unsigned decimal integers to Binary.
 *
 * Description: The deciToBinConV function converts unsigned decimal integers
 * numbers to binary and then prints the output to the console. Whenever a
 * number different from an unsigned decimal integer is supplied, it rejects it
 * with a feedback rejection output to the console.
 *
 * NB: At line 28, being an int data-type, the 'num' variable can only be
 * assigned integers after the division leaving out the remainders if any.
 */
void deciToBinConv(void)
{
	short int num, result[64], counter = 0, i;

	printf("\nPlease, enter a positive decimal integer: ");
	scanf("%hd", &num);

	if (num >= 0)
	{
		while (num > 1)
		{
			result[counter] = num % 2;

			counter++;

			num /= 2;
		}

		counter--;

		printf("\nHere is the binary conversion of the decimal integer supplied: ");

		printf("%hd", num);

		for (i = 0; counter >= i; counter--)
		{
			printf("%3hd", result[counter]);
		}

		printf("\n\n");
	}
	else
	{
		printf("\nYou can only input positive decimal integers.\n\n");

		printf("Please, try again.\n");
	}
}

#endif /* _BINCONV_H_ */
