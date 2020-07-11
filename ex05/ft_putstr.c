/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:02:31 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/11 15:51:01 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

void	ft_putstr(char *str)
{
	int inp;
	inp = 0;
	while(str[inp] != 0)
{
	ft_putchar(str[inp]);
	inp++;
}
}

