#include <stdio.h>
#include <stdlib.h>
int	is_prime(int i)
{
	int	j;

	j = 2;
	while (j < i)
	{
		if (i % j == 0)
			return (0);
		j++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	int	i = 2;
	int	numb;
	if (ac == 2)
	{
		if(atoi(av[1]) < 2 && atoi(av[1]) > 0)
			printf("%d", atoi(av[1]));
		else
			numb = atoi(av[1]);
			while (numb > 1)
			{
				if (is_prime(i))
				{
					while ( numb % i == 0)
					{
						printf ("%d", i);
						numb = numb / i;
						if (numb > 1)
							printf("*");
					}
				}
				i++;
			}
	}
	printf("\n");
	return (0);
}
