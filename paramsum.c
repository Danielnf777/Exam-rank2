#include <unistd.h>

void	putnumber(int i)
{
	char	c;

	while (i > 9)
		putnumber(i / 10);
	c = i + '0';
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	char	c;
	
	if (ac > 1)
	{
		ac -= 1;
		putnumber(ac);
	}
	write(1, "\n", 1);
	return (0);
}
	

