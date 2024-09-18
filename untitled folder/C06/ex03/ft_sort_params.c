#include <unistd.h>

int	compare(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	fix(int arc, char **arv)
{
	int	i;
	int	j;

	i = 1;
	while (i < arc)
	{
		j = 0;
		while (arv[i][j] != '\0')
		{
			write(1,&arv[i][j],1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (compare(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	fix(ac, av);
	return (0);
}
