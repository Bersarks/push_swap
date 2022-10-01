#ifndef UTILS_H
# define UTILS_H

int				ft_atoi(const char *str);
unsigned int	ft_strlen(const char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			**ft_split(char const *s, char c);
void			check_split(char **content);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memset(void *b, int c, size_t len);

#endif