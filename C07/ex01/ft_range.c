/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:03:42 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/15 15:03:51 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

 int *ft_range(int min, int max) {
 	int *dest;
	int M_M;
	int i;
	//if (min >= max ) 
	//	return (NULL);
	M_M = max - min;
	dest = malloc(sizeof(int)* M_M);
	
	if (min >= max) 
		return (NULL);
	
	i = 0;
	while (i < M_M ){
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
 }

int main () {
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
	//free (size);
}
