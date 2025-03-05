# include <unistd.h>

void    ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
		write(1, str++, 1);
}
/*
int	main()
{
	char *s = "the blue house";
	ft_putstr(s);
	return (0);
}
*/
