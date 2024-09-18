/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:56:50 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/17 21:25:49 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		c;

	dest = malloc(sizeof(strs) + 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dest[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			dest[c++] = sep[j++];
		}
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
int main() {
	char *strs[] = {"Jamal", "cool", "cccc4566"};
	char *sep = " . ";
	int size = 3;

	char *result = ft_strjoin(size, strs, sep);
	if (result != NULL) {
		printf("%s\n", result);
		//free(result);
	}
}
