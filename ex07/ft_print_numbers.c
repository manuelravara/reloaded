/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:40:51 by mravara           #+#    #+#             */
/*   Updated: 2026/10/22 12:40:53 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	i;

	i = '0' - 1;
	while (++i <= '9')
		ft_putchar(i);
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 	return (0);
// }
