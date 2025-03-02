#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 19;
	flag = 0;
	i = 0;
	ac--;
	while (ac--)
	{
		while (av[j][i])
		{
			if (av[j][i] >= 'A' && av[j][i] <= 'Z')
				av[j][i] += 32;
			i++;
		}
		i = 0;
		while(av[j][i])
		{
			if (av[j][i] == ' '  || av[j][i] == 9)
			{
				flag = 1;
			}
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
			{
				if (flag || i == 0)
				{
					av[j][i] -= 32;
					flag = 0;
				}
			}
			write(1, &av[j][i], 1);
			i++;
		}
		i = 0;
		j++;
		if (ac > 0)
			write(1, "\n", 1);
	}
	write(1, "\n", 1);
	return (0);
}

