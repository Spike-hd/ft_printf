/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:10:58 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/15 16:01:51 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	recursive_print_hexa(unsigned long n, char *base)
{
	if (n >= 16)
		print_hexa(n / 16, base);
	write(1, &base[n % 16], 1);
}

static int	count_hexa(unsigned long n)
{
	int count;

	count = 1;
	while (n >= 16)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	print_hexa(int n, char c)
{
	int count;
	unsigned long nb;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-80000000", 9);
		return (9);
	}
	if (n < 0)
	{
		nb = (unsigned long)(-n);
		count++;
		write(1, "-", 1);
	}
	else
	{
		nb = (unsigned long)n;
	}
	count += count_hexa(nb);
	if (c == 'x')
		recursive_print_hexa(nb, "0123456789abcdef");
	else if (c == 'X')
		recursive_print_hexa(nb, "0123456789ABCDEF");
	return (count);
}

int	void_to_hexa(void *p)
{
	unsigned long i;
	int count;

	i = (unsigned long)p;
	write(1, "0x", 2);
	count = 2 + count_hexa(i);
	recursive_print_hexa(i, "0123456789abcdef");
	return (count);
}

/*
   int	main()
   {
   print_lowercase_hexa(68);

   return (0);
   }
 */
