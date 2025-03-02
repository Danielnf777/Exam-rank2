# include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(ac == 3)
	{
		if (!av[1][j])
			write(1, "1", 1);
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					j++;
					break;
				}
				j++;
			}
			i++;
			if (av[1][i] == '\0')
				write(1, "1", 1);
			else if (av[2][j] == '\0')
			{
				write(1, "0", 1);
				break;
			}
		}
	}
	write(1, "\n", 1);
}
				
