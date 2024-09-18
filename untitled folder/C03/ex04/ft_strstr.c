/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:16:24 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/08 03:16:38 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		while ((str[i + j] == to_find[j]) && to_find[i + j] != 0)
		{
			j++;
		}
		if (to_find[j] == 0)
		{
			return (str + i);
		}
		i++;
	}
	j = 0;
	return (0);
}
/*int main () {
	char a[] = "jamal";
	char b[] = "la";
	printf("%s",ft_strstr(a,b));
}*/
