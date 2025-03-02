
int     ft_atoi(const char *str)

{
	int i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}

