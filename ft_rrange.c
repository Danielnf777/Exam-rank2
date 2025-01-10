#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int	i;
	int	*result;
	int	len;

	i = 0;
	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	result = malloc(len * sizeof(int));
	while (len--)
	{
		result[i++] = end;
		if (end < start)
			end++;
		else
			end--;
	}
	return (result);	
}

