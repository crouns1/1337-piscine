#include <unistd.h>
int main (int c, char **v) {
		int i=0;
	if (c == 2) {
		while(v[1][i]) {
			write(1,&v[1][i],1);
			if (v[1][i+1]) {
				write(1,"   ",3);
			}
			i++;
		}
	}
	return 0;
}
