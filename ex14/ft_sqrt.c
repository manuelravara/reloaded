/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:29:20 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:29:21 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(5));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(16));
// }
