/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:10:58 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/15 14:41:12 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_lowercase_hexa(unsigned long n, char *base)
{
	if (n >= 16)
		print_lowercase_hexa(n / 16);
	ft_putchar_fd(base[n % 16], 1);
}

int	count_hexa(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 16)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	print_hexa(int n, char c)
{
	int		count;
	char	*lower_base;
	char	*upper_base;

	lower_base = "0123456789abcdef";
	upper_base = "0123456789ABCDEF";
	if (n == -2147483648)
	{
		write(1, "-80000000", 9);
		return (9);
	}
	count = count_hexa(n);
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', 1);
	}
	if (c == 'x')
		print_hexa((unsigned long)n, lower_base);
	if (c == 'X')
		print_hexa((unsigned long)n, upper_base);
	return (count);
}

int	void_to_hexa(void *p)
{
	unsigned long	i;
	int				count;

	i = (unsigned long)p;
	count = 1;
	while (i >= 16)
	{
		i /= 16;
		count++;
	}
	i = (unsigned long)p;
	print_hexa(i, x);
	return (count);
}

/*
int	main()
{
	print_lowercase_hexa(68);

	return (0);
}
*/
