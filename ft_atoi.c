#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		neg = 1; 
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (*str && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-n);
	else
		return (n);
}

int main()
{
	char *number = "123";

	printf("\'%s\' is a string.\nWith the following words, the string will be magically transmutated into integer values based on the representative character:\nBy the Spirit of the Sun, the emisaries of the Void Realms!\nBy the Fires of Attrition and the Nosehairs of the Sanguine Sages,\nI command thee: ATOI!\n*poof*\n%d\n...\nSee? It is an integer now.\n", number, atoi(number));
	return (0);
}