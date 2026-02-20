#include <unistd.h>

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lower(c) || ft_is_upper(c));
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alnum(char c)
{
	return (ft_is_alpha(c) || ft_is_digit(c));
}

int	ft_is_word_start(char *str, int i)
{
	if (i == 0)
		return (1);
	if (!ft_is_alnum(str[i - 1]))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_word_start(str, i))
		{
			if (ft_is_lower(str[i]))
				str[i] -= 32;
		}
		else
		{
			if (ft_is_upper(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

#include <unistd.h>

char	*ft_strcapitalize(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_putstr(ft_strcapitalize(str));
	write(1, "\n", 1);
	return (0);
}
