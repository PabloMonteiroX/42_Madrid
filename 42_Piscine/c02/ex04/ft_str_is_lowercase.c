

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("\"hola\"      -> %d\n", ft_str_is_lowercase("hola"));
    printf("\"HOLA\"      -> %d\n", ft_str_is_lowercase("HOLA"));
    printf("\"hola42\"    -> %d\n", ft_str_is_lowercase("hola42"));
    printf("\"hola!\"     -> %d\n", ft_str_is_lowercase("hola!"));
    printf("\"\"          -> %d\n", ft_str_is_lowercase(""));
    return (0);
}
