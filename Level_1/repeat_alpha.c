#include <unistd.h>

int main (int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 64;
	l = 96;
	if (argc != 2)
		{
			write (1, "\n", 1);
			return (0);
		}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			while (argv[1][i] > j)
			{
				write (1, &argv[1][i], 1);
				j++;
			}
			j = 64;
			i++;
		}

		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			while (argv[1][i] > l)
			{
				write (1, &argv[1][i], 1);
				l++;
			}
		l = 96;
		i++;
		}
		else 
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

