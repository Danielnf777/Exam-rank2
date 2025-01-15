int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0;
	int	sign = 1;
	int	i = 0;
	int	digit;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			break;
		res = res * str_base + digit;
		i++;
	}
	return (res * sign);
}
#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi_base("12fdb3", 16)); // 12522963
    printf("%d\n", ft_atoi_base("1101", 2));    // 13
    printf("%d\n", ft_atoi_base("-1010", 2));   // -10
    printf("%d\n", ft_atoi_base("7", 8));       // 7
    return 0;
}

