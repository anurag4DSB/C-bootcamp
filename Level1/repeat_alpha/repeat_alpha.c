/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:21:24 by amittal           #+#    #+#             */
/*   Updated: 2017/04/20 23:37:20 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char *ch)
{
	char i;

	while(*ch)
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			i = 'a';
			while (*ch - i > 0)
			{
				ft_putchar(*ch);
				i++;
			}
		}
		if (*ch >= 'A' && *ch <= 'Z')
		{
			i = 'A' - 1;
			while (*ch - i > 0)
			{
				ft_putchar(*ch);
				i++;
			}
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
		return (0);
	}
	ft_repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
