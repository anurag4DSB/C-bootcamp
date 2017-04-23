/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 02:38:39 by amittal           #+#    #+#             */
/*   Updated: 2017/04/21 03:13:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha_mirror(char *ch)
{
	while (*ch)
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			ft_putchar('m' - (*ch - 'n'));
		}
		else if (*ch >= 'A' && *ch <= 'Z')
		{
			ft_putchar('M' - (*ch - 'N'));
		}
		else
			ft_putchar(*ch);
		ch++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	ft_alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
