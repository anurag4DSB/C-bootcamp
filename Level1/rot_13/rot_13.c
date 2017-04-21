/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:43:12 by amittal           #+#    #+#             */
/*   Updated: 2017/04/21 00:04:48 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar('a' + (*str - 'a' + 13) % 26);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar('A' + (*str - 'A' + 13) % 26);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	ft_rot_13(argv[1]);
	ft_putchar('\n');
	return(0);
}
