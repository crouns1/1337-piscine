/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:03:42 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/16 15:53:35 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	m_m;
	int	i;

	i = 0;
	m_m = max - min;
	dest = malloc(sizeof(int) * m_m);
	if (min >= max)
		return (NULL);
	i = 0;
	while (i <= m_m)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*int main () {
	int min = 0 ;
	int max = 5 ;
	int *size ;
//	size = max -min;
	int i=0;
	size = ft_range(min,max);
		while (i < max - min) {
	printf("%d",size[i]);
	i++;
		}
	free (size);
}*/
