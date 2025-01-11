#include <unistd.h>

void	putnumber(int i)
{
	char	c;

	if (i > 9)
		putnumber(i/ 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	
	i = 0;
	while (*str)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i);
}
int	main(int ac, char **av)
{
	int	i;
	int	result;
	int	number;

	i = 1;
	if (ac == 2)
	{
		while (i <= 9)
		{
			putnumber(i);
			write(1, " x ", 3);
			number = ft_atoi(av[1]);
			putnumber(number);
			write(1, " = ", 3);
			putnumber(i * number);
			if (i != 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


	


