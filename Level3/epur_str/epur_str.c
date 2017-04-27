/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:02:40 by amittal           #+#    #+#             */
/*   Updated: 2017/04/26 19:00:54 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_whitespaces(char *str)
{
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str < 33))
	{
		str++;
	}
	return (str);
}

void	epur_str(char *str)
{
	int i;
	char *head;

	int space = 1;
	head = ft_whitespaces(str);
	i = 0;
	while(head[i] != '\0')
	{
		if (head[i] < 33)
		{
			space = 1;
		}
		if (head[i] > 32)
		{
			ft_putchar(head[i]);
		}
		if (space == 1 && head[i] < 33 && head[i + 1] > 32)
		{
			ft_putchar(' ');
			space = 0;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	ft_putchar('\n');
	return(0);
}









