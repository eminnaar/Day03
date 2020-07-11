/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 14:57:40 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/11 15:00:50 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int value_1;
	int value_2;
	value_1 = *a;
	value_2 = *b;
	*a = value_1 / value_2;
	*b = value_1 % value_2;
}
