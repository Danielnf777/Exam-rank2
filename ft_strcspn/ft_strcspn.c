#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	result;
	int	i;

	result = 0;
	i = 0;
	while (*s)
	{
		while (reject[i] && reject[i] != *s)
			i++;
		if (*s == reject[i])
			return (result);
		i = 0;
		result++;
		s++;
	}
	return (result);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strcspn("0house", "badium"));
	printf("%zu\n", strcspn("0house", "badium"));
	return (0);
}
*/
