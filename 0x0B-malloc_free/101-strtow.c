#include "main.h"
#include <stdlib.h>

/**
 * count_word - auxiliary function to determine the count of words in a string
 * @s: string to assess
 *
 * Return: count of words
 */
int count_word(char *s)
{
	int alpha, beta, gamma;

	alpha = 0;
	beta = 0;

	for (gamma = 0; s[gamma] != '\0'; gamma++)
	{
		if (s[gamma] == ' ')
			alpha = 0;
		else if (alpha == 0)
		{
			alpha = 1;
			beta++;
		}
	}

	return (beta);
}

/**
 * **strtow - divides a string into separate words
 * @str: string to divide
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *delta;
	int epsilon, zeta = 0, eta = 0, theta, iota, kappa;

	while (*(str + eta))
		eta++;
	theta = count_word(str);
	if (theta == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (theta + 1));
	if (matrix == NULL)
		return (NULL);

	for (epsilon = 0; epsilon <= eta; epsilon++)
	{
		if (str[epsilon] == ' ' || str[epsilon] == '\0')
		{
			if (kappa)
			{
				iota = epsilon;
				delta = (char *) malloc(sizeof(char) * (kappa + 1));
				if (delta == NULL)
					return (NULL);
				while (zeta < iota)
					*delta++ = str[zeta++];
				*delta = '\0';
				matrix[zeta] = delta - kappa;
				zeta++;
				kappa = 0;
			}
		}
		else if (kappa++ == 0)
			zeta = epsilon;
	}

	matrix[zeta] = NULL;

	return (matrix);
}

