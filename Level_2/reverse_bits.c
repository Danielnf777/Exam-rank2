unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;
	
	i = 8;
	res = 0;
	while (i)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (res);
}

#include <unistd.h>

int	main()
{
	int	i;
	unsigned char	c;

	i = 7;
	c = reverse_bits(18);
	while (i >= 0)
	{
		if (((c >> i) & 1) == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	return (0);
}

