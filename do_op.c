#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	result;

	if (ac == 4)
	{
		if (av[2][0] == '+')
			result = atoi(av[1]) + atoi(av[3]);
		if (av[2][0] == '-')
			result = atoi(av[1]) - atoi(av[3]);
		if (av[2][0] == '*')
			result = atoi(av[1]) * atoi(av[3]);
		if (av[2][0] == '/')
			result = atoi(av[1]) / atoi(av[3]);
		if (av[2][0] == '%')
			result = atoi(av[1]) % atoi(av[3]);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}


