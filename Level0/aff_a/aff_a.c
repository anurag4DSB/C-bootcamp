/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:02:33 by amittal           #+#    #+#             */
/*   Updated: 2017/04/20 17:13:21 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_check_a(char *str)
{
	while(*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int 	main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return(0);
	}
	if (ft_check_a(argv[1]) == 1)
		ft_putchar('a');
	ft_putchar('\n');
	return(0);
}



















