/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:29:59 by mravara           #+#    #+#             */
/*   Updated: 2026/08/04 15:30:03 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// The strdup() function returns a pointer to a new string which is a
// duplicate of the string s.  Memory for the new string is obtained
// with malloc(3), and can be freed with free(3).

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		return (i);
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	size = ft_strlen(src) + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	*str;
// 	char	*str_copy;

// 	str = "Test string.";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "amva 312 ag eak sa \t !@*&$%$$# fewfaskfdv \r \v";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	return (0);
// }
