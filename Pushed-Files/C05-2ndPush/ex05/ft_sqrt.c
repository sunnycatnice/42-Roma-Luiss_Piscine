/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:17:35 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/09 19:23:00 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sq;

	sq = 0;
	if (nb < 0)
		return (0);
	while (!(sq * sq == nb))
		sq++;
	if (sq * sq == nb)
		return (sq);
	return (0);
}