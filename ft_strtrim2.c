/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:39:37 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 17:42:50 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t a;
	size_t b;
	size_t c;
	char *newstr;
	size_t s1len;

	a = 0;
	b = 0;
	c = 0;
	s1len = ft_strlen(s1);
	printf("%zu",s1len);
	newstr = (char *)malloc((s1len) * (sizeof(char)));
	if (newstr == NULL)
		return (NULL);

	
	size_t ft_is_in_set(char const *s1, char const *set)
	{
		while (set[b] != '\0')
		{
			if(s1[a] == set[b])
			{
				
			}
			while (s1[a] != set[b])
			{
				b++;
			}
			newstr[c] = s1[a];
			c++;
			a++;
			b = 0;
		}
	}
	return (newstr);
}




int main(void)
{
    char *s1 = "   hello world   ";
    char *set = " ";
    char *trimmed = ft_strtrim(s1, set);
    printf("Trimmed string: '%s'\n", trimmed);
    free(trimmed);
    return 0;
}
