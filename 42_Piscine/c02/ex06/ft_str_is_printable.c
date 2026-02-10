

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("\"hola\"      -> %d\n", ft_str_is_printable("hola"));
    printf("\"HOLA\"      -> %d\n", ft_str_is_printable("HOLA"));
    printf("\"hola42\"    -> %d\n", ft_str_is_printable("hola42"));
    printf("\"hola!\"     -> %d\n", ft_str_is_printable("hola!"));
    printf("\"\"          -> %d\n", ft_str_is_printable(""));
    return (0);
}