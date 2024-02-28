#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	c[] = "Hey, this is your text:)";
	char	*poin_c;

	poin_c = c;
	ft_putstr(poin_c);
	return (0);
}
