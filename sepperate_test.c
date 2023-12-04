#include <unistd.h>
#include <stdio.h>
int	ft_unsigned(unsigned int n)
{
	int		count;
	char	o;

	count = 0; //one
	if (n / 10 > 0)
		count += ft_unsigned(n / 10);
	o = n % 10 + '0';
	return (count + write(1, &o, 1));
	// unsigned negative (dont know what to handle)
}

int	main()
{
	printf("\n%u",ft_unsigned(-12));
	return 1;
}

//