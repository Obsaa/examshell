#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		isLower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int		isUpper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && isUpper(str[i]) == 1)
			ft_putchar(str[i]);
		else if ((str[i + 1] == ' ' || str[i + 1] == '\0') && isLower(str[i]) == 1)
			ft_putchar(str[i] - 32);
		else if (isUpper(str[i]) == 1 && str[i + 1] != ' ')
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < (argc))
			{
				rstr_capitalizer(argv[i]);
				ft_putchar('\n');
				i++;
			}
	}
	else
		ft_putchar('\n');
	return (0);
}
