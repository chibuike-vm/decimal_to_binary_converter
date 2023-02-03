#ifndef _BINCONV_H_
#define _BINCONV_H_

/**
 * deciToBinConv - Converts unsigned decimal integers to Binary.
 *
 * Description: The deciToBinConV function converts unsigned decimal integers
 * numbers to binary and then prints the output to the console. Whenever a
 * number different from an unsigned decimal integer is supplied, it rejects it
 * with a feedback rejection output to the console. Here the stdlib.h standard
 * libray function 'calloc' was used to dynamically allocate contiguous multiple
 * blocks of requested memory to the pointer variable ('result', of type char).
 * Thereafter, just prior to the end of the deciToBinConv function's execution
 * or run time, the pointer variable's memory was freed from the heap memory
 * data segment using the 'free' standard stdlib.h library function.
 *
 * NB: At line 42, being a 'long int' data-type, the 'num' variable can only be
 * assigned integers after the division leaving out the remainders if any.
 */
void deciToBinConv(void)
{
	char i, *result;
	long int num, counter = 0;

	printf("\nPlease, enter a positive decimal integer: ");
	scanf("%ld", &num);

	result = (char *)calloc(64, sizeof(char));

	if (result == NULL)
	{
		puts("Sorry, memory was not successfully allocated");
	}
	else
	{
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
			printf("%ld", num);

			for (i = 0; counter >= i; counter--)
			{
				printf("%3d", result[counter]);
			}

			printf("\n\n");
		}
		else
		{
			printf("\nYou can only input positive decimal integers.\n\n");
			printf("Please, try again.\n");
		}

		free(result);
		result = NULL;
	}
}

#endif /* _BINCONV_H_ */
