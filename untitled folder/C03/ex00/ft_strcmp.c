/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 04:54:19 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/08 04:47:41 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main (void) {
	char a[] = "jamalb";
	char b[] = "jamal";
	printf("%d",ft_strcmp(a,b));
}*/
