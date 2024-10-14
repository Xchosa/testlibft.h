/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:32:19 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/09 10:40:48 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
    strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/
int	ft_strlen( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlcat(char *dest, char *src)
{
	int	len;
	int	lendest;
	int	i;

	i = 0;
	len = ft_strlen(src);
	lendest = ft_strlen(dest);
	while (i < len)
	{
		dest[lendest] = src[i];
		i++;
		lendest++;
	}
	dest[lendest] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	char	a[100];

	a[100] = "Hallo";
	if (argc == 2)
	{
		printf("%s\n", a);
		ft_strlcat(a, argv[1]);
		printf("%s", a);
	}
	return (0);
}
