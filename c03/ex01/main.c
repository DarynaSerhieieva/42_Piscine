#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "this is equal? But it can be equal";
	char	str2[] = "this is no equal? But it can be equal";
    unsigned int    num = 10;

	int	rvalue = ft_strncmp(str1, str2, num);

	if (rvalue == 0)
    	printf("Strings are equal");
  	else
    	printf("Strings are unequal");

  	printf("\nValue returned by strcmp is: %d", rvalue);
	return (0);
}
