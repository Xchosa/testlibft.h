/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:21:58 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/19 19:29:06 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./libft.h"

char **ft_split(char const *s, char c)
{
	size_t i;
	char **spliting_string;
	int a;
	int b;
	char *s_sep_as_NULL;
	int *counters_septerator;
	size_t str_len;

	a = 0;
	b = 0;
	s_sep_as_NULL= ft_detect_c(s,c)
	
	a = ft_counting_strs(s_sep_as_NULL);
	while (i <= a)
		{
			ft_malloc_str(seperator_pos,i)
			a++;
		}
	
}

char *ft_detect_c(char const *s, char c)
{
	char *seperator_pos;
	int counter_seperator;
	int i;
	i = 0;
	int a;
	int b;
	int counter;
	while(s[i] != '\0')
	{
		while (s[i] == c)
		{
				counter_seperator++;
				seperator_pos[i] = '\0';
		}
		i++;
	}
}
int ft_counting_strs(char *seperator_pos, int counter_seperator)
{
	int i;
	i = 0;
	int nbr_str;
	nbr_str = 0;
	while (i <= counter_seperator)
	{
		while(seperator_pos[i++] == '\0')
		{
			counter_seperator--;
		}
		nbr_str++;
	}
	return(nbr_str);
}

char *ft_malloc_str(const char *s, char *seperator_pos, int a)
{
	int i;
	char *newstr;
	int strlen;
	b = 0;
	
	strlen	= ft_strlen(seperator_pos);
	newstr[a]= (char*)malloc(strlen *(sizeof(char*)));
	if(newstr[a]= NULL)
		return (NULL);
	while (b <= strlen)
	{
		newstr[a][b] = s[i]
}
	
}
