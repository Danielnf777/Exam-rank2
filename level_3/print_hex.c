#include <unistd.h>

void put_nbr(int num)
{
    char hex[] = "0123456789abcdef";

    if (num >= 16)
        put_nbr(num / 16);
    write(1, &hex[num % 16], 1);
}

int ft_atoi(char *str)
{
    unsigned int num = 0;

    while (*str >= '0' && *str <= '9')
{
	num = num * 10 + (*str - '0');
        str++;                     
}

return (num); 
}

int main(int argc, char **argv)
{
	if (argc != 2)
    	{
        	write(1, "\n", 1);
      		return 0;
	}
	unsigned int num = ft_atoi(argv[1]);
	put_nbr(num);
	write(1, "\n", 1);
	return 0;
}
