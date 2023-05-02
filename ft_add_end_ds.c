#include "libft.h"

char **add_end_ds(char **ds, char *add)
{
  char **new;
  int i;

  i = 0;
  if (ds == NULL)
  {
    if (!(new = malloc(sizeof(char *) * 2)))
      return 0;
    if (!(new[0] = ft_strdup(add)))
      return 0;
    new[1] = 0;
  } else {
    if (!(new = malloc(sizeof(char *) * (ft_count_words(ds) + 2))))
      return 0;
    while (ds[i])
    {
      if (!(new[i] = ft_strdup(ds[i])))
        return 0;
      i++;
    }
    if (!(new[i] = ft_strdup(add)))
      return 0;
    new[++i] = 0;
  }
  double_str_free(ds);
  return new;
}
