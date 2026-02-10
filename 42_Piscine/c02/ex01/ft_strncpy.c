

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Hola";
	char	dest1[10];
	char	dest2[10];

	ft_strncpy(dest1, src, 10);
	ft_strncpy(dest2, src, 2);

	printf("src   : %s\n", src);
	printf("dest1 : %s\n", dest1);
	printf("dest2 : %s\n", dest2);
	return (0);
}