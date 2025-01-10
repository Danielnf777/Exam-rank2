#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	result;


	
	if (ac == 3)
	{
		i = atoi(av[1]);
		j = atoi(av[2]);
		if (i > j)
		{
			result = j;
			while(result > 0)
			{
				if (i % result == 0 && j % result == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				result--;
			}
		}
		else
		{
			result = i;
			while(result > 0)
			{
				if (i % result == 0 && j % result == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				result--;
			}
		}
	}
	printf("\n");
	return (0);
}



