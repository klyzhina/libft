/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kselyzhi <kselyzhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:19:19 by kselyzhi          #+#    #+#             */
/*   Updated: 2026/05/12 15:19:20 by kselyzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	if (n / 10 == 0)
		return (1);
	if (n < 0)
		return (1 + count_digits(-(n / 10)));
	return (1 + count_digits(n / 10));
}

static void	fill(char *result, int n, int i)
{
	if (n >= 10)
		fill(result, n / 10, i - 1);
	result[i] = '0' + n % 10;
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = count_digits(n) + (n < 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(sizeof (char) * (count_digits(n) + 1 + (n < 0)));
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	fill(result, n, i - 1);
	return (result);
}
