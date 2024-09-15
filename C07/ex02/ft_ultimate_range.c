#include <stdlib.h>
#include <stdio.h>

 int ft_ultimate_range(int **range, int min, int max) {
			int M_M;
			int i;
			i = 0;
			M_M = max - min ;
		*range = malloc(sizeof(int) * M_M);
		
		if (*range == NULL)
			return (0);
	
		while (i < M_M) {
			(*range)[i] = min;
			    min++;
		    	i++;
		}	
	
		return (M_M);
 }
int main () {
	int min = 0 ;
	int max = 5 ;
	int size ;
	int *range ;
	
	int i=0;
	size = ft_range(range,min,max);
		while (i < max - min) {
	printf("%d",size[i]);
	i++;
		}
	//free (size);
}

}
