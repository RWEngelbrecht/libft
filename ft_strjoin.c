#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    //int i;
    //int j;

    str = ft_strcat(s1, s2);
    /*
    str = ft_memalloc((ft_strlen(s1) + ft_strlen(s2));
    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    */
    if (!str)
        return (NULL);
    else
        return (str);
}
