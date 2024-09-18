/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:16:05 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/17 13:30:56 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	r;

	r = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = malloc(r * sizeof(int));
	if (p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = p;
	i = 0;
	while (i < r)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int main () {
	int min = 0 ;
	int max = 5 ;
	int size ;
	int *range ;
	int i=0;
	size = ft_ultimate_range(range,min,max);
		while (i < max - min) {
	printf("%d",size[i]);
	i++;
		}
	//free (size);
}

}*/
