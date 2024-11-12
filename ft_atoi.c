int ft_atoi(const char *str)
{
	unsigned int i;
	int number;
	int coefficient;

	i = 0;
	number = 0;
	coefficient = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		coefficient = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number*=10;
		number = number + (str[i] - '0');
		i++;
	}
	number *= coefficient;
	return (number);
}
