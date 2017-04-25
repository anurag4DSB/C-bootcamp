/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:32:24 by amittal           #+#    #+#             */
/*   Updated: 2017/04/25 15:33:46 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char *ch)
{
	int neg;
	int num;

	neg = 0;
	num = 0;
	if (*ch == '-')
	{
		neg = 1;
		ch++;
	}
	else
	{
		while (*ch)
		{
			num = num * 10;
			num += *ch - 48;
			ch++;
		}
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}

void	ft_do_op(int a, int b, char ch)
{
	if (ch == '+')
	{
		ft_putnbr(a + b);
	}
	else if (ch == '-')
	{
		ft_putnbr(a - b);
	}
	else if (ch == '*')
	{
		ft_putnbr(a * b);
	}
	else if (ch == '/')
	{
		ft_putnbr(a / b);
	}
	else if (ch == '%')
	{
		ft_putnbr(a % b);
	}
}

int		main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		ft_do_op(num1, num2, argv[2][0]);
	}
	ft_putchar('\n');
	return (0);
}
