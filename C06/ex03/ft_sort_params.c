#include <unistd.h>

/*void compare(char *s1, char *s2) {
		int i=0;
		while(s2[i] != 0){
			if (s1[i] = s2[i])
				i++;
		}
		s2[i] = 0;
		return (s1[i] - s2[i])
}*/

char sort(int c, char **v){
		int i=1;	
		int swp;
	while (i < c-1) {
		while(v[i]!= 0 && v[i+1]) {
			swp = v[i];
		   v[i] = v[i+1];
	   		v[i+1] = swp;		
			}
			write(1,&v[i],1);
			i++;
			
}
}

void fix(char *v) {
	int i;
	int s[256] ;
	i = 0;
	while(v[i] != 0) {
		if (s[(int)v[i] ] == 0)
			s[(int) v[i]] = 1;
	}
	i = 0;
	while(c[i] != 0) {
		if (s[(int)c[i]] == 1)
			s[(int)c[i]] = 2;
	}
	i=0;
}

int main(int c,char **v) {
		int i =1;
		if (i < c) {
	while(v[i]) {
		fix(v[i]);
		sort(v[i]);
		write(1,&v[i],1);
		i++;
	}	
}
}
