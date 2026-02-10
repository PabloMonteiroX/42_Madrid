

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("\"HOLA\"      -> %d\n", ft_str_is_uppercase("HOLA"));
    printf("\"hola\"      -> %d\n", ft_str_is_uppercase("hola"));
    printf("\"HOLA42\"    -> %d\n", ft_str_is_uppercase("HOLA42"));
    printf("\"HOLA!\"     -> %d\n", ft_str_is_uppercase("HOLA!"));
    printf("\"\"          -> %d\n", ft_str_is_uppercase(""));
    return (0);
}