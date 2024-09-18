/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:27:00 by jait-chd          #+#    #+#             */
/*   Updated: 2024/09/18 20:32:02 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strs_len(int size, char **strs)
{
	int	i;
	int	count;

	if (size == 0)
	{
		return (2);
	}
	i = 0;
	count = 0;
	while (i < size)
	{
		count += length(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;
	int		stotal;

	k = 0;
	stotal = (strs_len(size, strs)) + (strs_len(size, strs) * size - 1);
	dest = malloc(stotal * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i != size - 1)
			dest[k++] = sep[j++];
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	*str[3];
	char	*sep;

	str[0] = "chdid";
	str[1] = "jamal";
	str[2] = "hello";
	str[3] = "jamal";
	sep = ", ";
	printf("%s", ft_strjoin(0, str, sep));
	return (0);
}*/
