#include "libft.h"

void ft_printf_ds(char **str)
{
	int i;
		
	i = 0;
	while(str[i])
	{
		ft_putendl_fd(str[i], 1);
		i++;
	}
}
