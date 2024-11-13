#include "libft.h"

static int ft_digit(int n) //!! static olursa sadece bu dosyada görünür
{
	int digit;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;

	digit = 0;
	while (n > 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char *ft_itoa(int n)
{
	int digit;
	char *str;
	int coefficient;

	digit = ft_digit(n);
	coefficient = 1;
	if (n < 0)
	{
		coefficient = -1;
		n *= -1;
		digit++;
	}
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	str[digit] = '\0';
	str[0] = '0';
	while (digit-- > 0)
	{
		str[digit] = '0' + (n % 10);
		n /= 10;
	}
	if (coefficient < 0)
		str[0] = '-';
	return (str);
}
