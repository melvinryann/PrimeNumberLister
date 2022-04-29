#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>





/* Find all prime numbers below upperLimit */

const int MAX = 1000;

void printLimitError()
{
printf("Error: must be 2 < limit < MAX\n");
}


bool isOutOfBounds(int limit)
{

return (limit < 2 || limit > MAX);

}

bool isPrime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
		return false;

		}

	}

return true;

}


int main()
{

printf("\n=== Prime Numbers Imporved ===\n\n");

int upperLimit;
printf("Enter the upper limit: ");
scanf("%d", &upperLimit);

if (isOutOfBounds(upperLimit))
{
	printLimitError();
	return EXIT_FAILURE;

}

printf("Prime numbers up to %d:\n", upperLimit);


for (int number = 2; number < upperLimit; number++)
{
	if (isPrime(number))
	{
		printf("%d\n", number);

	}

}

/* Find the first prime number above lowerLimit */
int lowerLimit;

printf("Enter the lower limit: ");
scanf("%d", &lowerLimit);

if (isOutOfBounds(lowerLimit))
{
	printLimitError();
	return EXIT_FAILURE;
}

int firstPrimeNumber = -1;
for (int number = lowerLimit; number < MAX; number++)
{
	if (isPrime(number))
	{
		firstPrimeNumber = number;
		break;

	}
}


if (firstPrimeNumber == -1)
{

	printf("Cannot find prime numbers above %d\n", lowerLimit);
}
else
{

	printf("First prime number above %d is %d\n", lowerLimit, firstPrimeNumber);

}


}

