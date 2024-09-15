#include <unistd.h>

int main (int c,char **v) {
	int i;
	int j;

	i = c -1;
		while (i > 0) {
			j=0;
			while(v[i][j]) {
				write(1,&v[i][j],1);
				j++;
			} 
			write(1,"\n",1);
			i--;
	}
}
