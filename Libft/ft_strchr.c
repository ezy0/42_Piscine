
char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c || c == 0)
		return (s);
	return (0);
}
