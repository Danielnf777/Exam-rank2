#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	j;
	int	*i;
	int	len;

	j = 0;
	len = end - start;
	if (len < 0)
		len *= -1;
	len += 1;
	i = malloc(sizeof(int) * len);
	if (start > end)
	{
		while (len)
		{
			i[j] = end;
			end++;
			j++;
			len--;
		}
	}
	else
	{
		while (len)
		{
			i[j] = end;
			end--;
			j++;
			len--;
		}
	}
	return (i);
}

#include <stdio.h>

int	main()
{
	int	*i;
	int	j;

	j = 0;
	i = ft_rrange(-1, 2);
	while (j < 4)// dont works with while (i[j])
	{
		printf("%d\n", i[j]);
		j++;
	}
	return (0);
}


