/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:28:30 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:28:31 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	if (!nb || nb < 0)
		return (0);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(2));
// 	printf("%d\n", ft_recursive_factorial(3));
// 	printf("%d\n", ft_recursive_factorial(4));
// 	printf("%d\n", ft_recursive_factorial(5));
// 	printf("%d\n", ft_recursive_factorial(6));
// 	printf("%d\n", ft_recursive_factorial(7));
// }
