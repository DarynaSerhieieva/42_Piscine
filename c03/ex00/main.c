#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "this is equal?";
	char	str2[] = "this is equal?";

	int	rvalue = ft_strcmp(str1, str2);

	if (rvalue == 0)
    	printf("Strings are equal");
  	else
    	printf("Strings are unequal");

  	printf("\nValue returned by strcmp is: %d", rvalue);
	return (0);
}
