#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (av[1][i] + 13 > 'z')
				{
					j = av[1][i] + 13 - 'z';
					av[1][i] = 'a' - 1 + j;
				}
				else
					av[1][i] += 13;
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] + 13 > 'Z')
				{
					j = av[1][i] + 13 - 'Z';
					av[1][i] = 'A' - 1 + j;
				}
				else
					av[1][i] += 13;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

