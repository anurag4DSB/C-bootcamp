/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:33:21 by amittal           #+#    #+#             */
/*   Updated: 2017/04/20 17:42:04 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_whitespaces(char *ch)
{
	while (*ch == ' ' || *ch == '\t')
		ch++;
	return(ch);
}

void	ft_print_first_word(char *str)
{
	while (*str  && *str != ' ' && *str != '\t')
	{
	  	ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}


int main(int argc, char **argv)
{
	char *ptr;

	ptr = argv[1];
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argv[1][0] == ' ' || argv[1][0] == '\t')
		ptr = ft_whitespaces(argv[1]);
	ft_print_first_word(ptr);
	return (0);
}







