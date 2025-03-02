#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	num;
	int	date;

	if (num > date)
		i = num;
	else
		i = date;
	if (ac == 3)
	{
		num = atoi(av[1]);
		date = atoi(av[2]);
		while (i)
		{
			if (num % i == 0 && date % i == 0)
			{
				printf("%d\n", i);
				return (0);
			}
			i--;
		}
	}
	printf("\n");
	return (0);
}
		



