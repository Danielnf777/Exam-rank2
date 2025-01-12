#include <stdlib.h>

int	characters(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != 9 && str[i] != '\n')
		i++;
	return (i);
}
	


char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	int	words;
	int	letters;
	int	end_word;
	char **array;

	i = 0;
	words = 0;
	j = 0;
	k = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == 9 || str[i] == '\n'))
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != ' ' && str[i] != 9 && str[i] != '\n')
			i++;
	}
	i = 0;
	array = malloc(sizeof(char *) * words);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == 9 || str[i] == '\n'))
			i++;
		letters = characters(str);
		array[j] = malloc(sizeof(char) * letters + 1);
		while (str[i] && str[i] != ' ' && str[i] != 9 && str[i] != '\n')
		{
			array[j][k] = str[i];
			i++;
			k++;
		}
		array[j][k] = '\0';
		k = 0;
		j++;
	}
	array[j] = NULL;
	return (array);
}

#include <stdio.h>
int	main(void)
{
	int i;
	char	**result;

	i = 0;
	char string[] = "the blue house";
	result = ft_split(string);
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}


		


