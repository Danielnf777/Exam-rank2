#include <unistd.h>
void put_number(int numb)
{
	char	c;
	if (numb > 15)
		put_number(numb / 16);
	if (numb <= 9)
		c = numb + '0';
	else
		c = numb % 16 + 'a';
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	int	numb;
	int	i;
	int	j;

	i = 0;
	j = 0;
	numb = 0;

	if (ac == 2)
	{
		while (av[1][j])
			j++;
		j--;
		while(av[1][j])
		{
			if (av[1][j]) - '0' > 9)

		while (av[1][i])
		{
			numb = numb * 10 + av[1][i] - '0';
			i++;
		}
	}
	while (numb <= 15)
	{
		numb = num * 16 +
	put_number(numb);
	write(1, "\n", 1);
	return (0);
}

