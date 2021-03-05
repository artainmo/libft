#include "libft.h"

void ft_error(char *text)
{
  write(2, text, ft_strlen(text));
  exit(1);
}
