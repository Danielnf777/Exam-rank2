int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if ((n & (n - 1)) == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	int	i;

	i = is_power_of_2(1024);
	printf("%d\n", i);
	return (0);
}
*/
