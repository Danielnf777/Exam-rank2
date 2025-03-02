#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	flag = 0;
	i = 0;
	if (ac > 1)
	{
		while (av[1][i] == ' ' || av[1][i] == 9)
			i++;
		start = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != 9)
			i++;
		i--;
		end = i;
		i++;
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == 9)
				i++;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != 9)
			{
				write(1, &av[1][i], 1);
				i++;
				flag = 1;
			}
			if (flag)
				write(1, " ", 1);
			while(av[1][i] == ' ' || av[1][i] == 9)
				i++;
		}
	}
	write(1, &av[1][start], end - start + 1);
	write(1, "\n", 1);
	return (0);
}
