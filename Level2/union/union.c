/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 00:09:14 by amittal           #+#    #+#             */
/*   Updated: 2017/04/26 02:23:45 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_check_char(char *ch, char c, int len)
{
	int i;
	int dup;

	dup = 0;
	i = 0;
	while (i < len)
	{
		if (ch[i] == c)
			dup = 1;
		i++;
	}
	return (dup);
}

int		union2(char *s1, char *s2)
{
	int		i;
	char	cup[127];
	int		j;

	i = 0;
	j = 0;
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	while (s1[i] != '\0')
		if (!(ft_check_char(s1, s1[i], i)))
		{
			cup[j] = s1[i];
			i++;
			j++;
		}
		else
			i++;
	i = 0;
	while (s2[i] != '\0')
		if (!(ft_check_char(s2, s2[i], i)))
		{
			cup[j] = s2[i];
			i++;
			j++;
		}
		else
			i++;
	cup[j] = '\0';
	i = 0;
	while (cup[i] != '\0')
		if (!(ft_check_char(cup, cup[i], i)))
		{
			ft_putchar(cup[i]);
			i++;
		}
		else
			i++;
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		union2(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
