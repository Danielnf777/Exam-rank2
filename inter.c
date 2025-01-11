#include <unistd.h>

int	main(int ac, char **av)
{
	char	c[256] = {0};
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (!c[av[2][j]])
					{
						write(1, &av[2][j], 1);
						c[av[2][j]] = 1;
					}
				}
				j++;
			}
			i++;
			j = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}

