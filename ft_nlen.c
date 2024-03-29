/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 00:37:23 by jquince           #+#    #+#             */
/*   Updated: 2019/10/13 01:45:48 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		++i;
	else
		return (0);
	while (n != 0)
	{
		++i;
		n = n / 10;
	}
	return (i);
}
