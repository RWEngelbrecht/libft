#include "libft.h"

char *  ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    str = ft_strnew(len);
    i = 0;
    s = s + start;
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[i];
        i++;
    }
    return (str);
}
