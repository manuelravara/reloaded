/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:37:35 by mravara           #+#    #+#             */
/*   Updated: 2026/10/22 12:37:49 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a' - 1;
	while (++i <= 'z')
		ft_putchar(i);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1);
// 	return (0);
// }
