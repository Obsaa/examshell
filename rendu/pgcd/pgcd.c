#include <stdlib.h>
#include <stdio.h>

int		ft_pgcd(int a, int b)
{
	int div;
	int pgcd;

	div = 1;
	if (a < 0 || b < 0)
		return (-1);
	while (div < a && div < b)
	{
		if (a % div == 0 && b % div == 0)
			pgcd = div;
		div ++;
	}
	return (pgcd);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_pgcd(atoi(argv[1]),atoi(argv[2])));
	printf("\n");
}
