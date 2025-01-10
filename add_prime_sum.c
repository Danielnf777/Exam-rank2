#include <unistd.h>

int	prime_numb(int number)
{
	int	i;

	i = 2;
	while (i < number)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void put_number(int number)
{
	char	c;

	if (number > 9)
		put_number(number / 10);
	c = number % 10 + 48; 
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	int	i;
	int number;
	int result;

	i = 0;
	number = 0;
	result = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			number = number * 10 + av[1][i] - '0';
			i++;
		}
		while (number > 1)
		{
			if (prime_numb(number))
				result = result + number;
			number--;
		}
	}
	put_number(result);
	write(1, "\n", 1);
	return (0);
	
}
