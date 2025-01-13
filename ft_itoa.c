#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int	sign;
	int	size;
	char	*c;
	int	cpy;

	sign = 0;
	cpy = nbr;
	size = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		sign = 1;
		size++;
		cpy *= -1;
	}
	if (nbr == 0)
		size = 1;
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	c = malloc(sizeof(char) * (size + sign + 1));
	c[size + sign] = '\0';
	c[0] = '-';
	size--;
	while (size >= sign)
	{
		c[size] = cpy % 10 + '0';
		cpy /= 10;
		size--;
	}
	return (c);
}

int	main(void)
{
	printf("%s", ft_itoa(-98));
	return (0);
}

