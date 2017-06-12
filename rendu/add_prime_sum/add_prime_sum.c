#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	int neg = 1;

	while (str[i] == 0 || 9 == str[i] || 10 == str[i] ||
			str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = -1;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return(result * neg);
		}
		else
			result = result * 10 + (int)(str[i] - '0');
		i++;
	}
	return (result);
}


void	ft_putnbr(nb)
{
	if  (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
		ft_putchar(nb + '0');
}

is_prime

int		main(int argv, char **argc)
{
	int total = 0;
	int prime = 0;
	int num;

	if (argv != 2 || argc[1][0] == '-')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	num = ft_atoi(argc[1]);
	while (prime <= num)
	{
		if (ft_isprime(prime))
			total += prime;
		prime++;
	}
	ft_putnbr(total);
	ft_putchar('\n');
	return(0);
}
