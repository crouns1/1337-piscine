int occ(char *str) {
	int i=0;
	int c=0;
		while (str[i]) {
			if(str[i] == 'A') {
				c += 1;
			}	
		
		i++;
		}
	return (c);
} 
#include <stdio.h>
int main () {
	printf("%d",occ("HeqAAQAkkA"));
}
