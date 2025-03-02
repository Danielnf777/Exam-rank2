#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i  = 0;
	if (argc != 4)
		{
			write(1, "\n", 1);
			exit(1);
		}

	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		exit(1);
	}
	if (argc == 4)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
			{	
				argv[1][i] = argv[3][j];
				write(1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}




