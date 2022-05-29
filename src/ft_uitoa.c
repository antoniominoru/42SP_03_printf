/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:50:00 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/29 22:14:15 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_countsize(unsigned int n, size_t len_base)
{
	if ((n / len_base) == 0)
		return (1);
	else
		return (1 + ft_countsize((n / len_base), len_base));
}

static void	ft_convbase(unsigned int nbr, char *n, char *base, size_t i)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (nbr >= (unsigned int)len_base)
		ft_convbase((nbr / len_base), n, base, (i -1));
	num[i] = base[nbr % len_base];
}

char	*ft_uitoa(unsigned int nbr, char *base)
{
	size_t	len_nbr;
	size_t	len_base;
	char	*str_num;

	len_base = ft_strlen(base);
	len_nbr = ft_countsize(nbr, len_base);
	str_num = malloc ((len_nbr + 1) * sizeof(char));
	if (!str_num)
		return (NULL);
	str_num[len_nbr--] = '\0';
	ft_convbase(nbr, str_num, base, len_nbr);
	return (str_num);
}
