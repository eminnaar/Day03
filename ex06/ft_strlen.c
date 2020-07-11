/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:53:52 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/11 15:58:45 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen(char *str);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_strlen(char *str)
{
	int inp;
	inp = 0;
	while (str[inp] != 0)
	{
		inp++;
	}
	return inp;
}
