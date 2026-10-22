/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:41:24 by mravara           #+#    #+#             */
/*   Updated: 2026/10/22 12:41:25 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int c;

// 	a = 1;
// 	b = 0;
// 	c = -1;

// 	ft_is_negative(a);
// 	ft_putchar('\n');
// 	ft_is_negative(b);
// 	ft_putchar('\n');
// 	ft_is_negative(c);
// 	ft_putchar('\n');
// }