/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:38:26 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 19:47:36 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}
/*
int main ()
{
	ft_putstr("Hola");
}
*/
