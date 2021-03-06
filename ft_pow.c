/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majones <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 21:38:20 by majones           #+#    #+#             */
/*   Updated: 2018/05/19 22:51:10 by majones          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_pow(int a, int b)
{
	int c;

	c = a;
	if (b == 0)
		return (1);
	while ((b - 1) > 0)
	{
		a = c * a;
		b--;
	}
	return (a);
}
