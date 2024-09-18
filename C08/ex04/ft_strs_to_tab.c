/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:25:20 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/18 18:05:00 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = length(src) + 1;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((sizeof(t_stock_str) * (ac + 1)));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = av[i];
		tab[i].size = length(av[i]);
		if (tab[i].copy == NULL)
		{
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*int	main(int c, char **v)
{
	t_stock_str	*range;
	int			i;

	range = ft_strs_to_tab(c, v);
	i = 0;
	while (range[i].str)
	{
		printf("%s %d %s\n", tab[i].str, range[i].size, range[i].copy);
		i++;
	}
}*/
