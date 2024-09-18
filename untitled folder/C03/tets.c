#inlcude <stdio.h>

char x(char *x,char *y) {
	int i=0;
	//int j=0;
	while(x[i]  != 0 && x[i] == y[i]) {
		i++;
	}
	return (x[i] - y[i]);
}
char xx(char *x, char *y) {
	int i=0;
	int j=0;
	while (x[i]) {
		i++;
	}
	while(y[j]) {
		if(y[j] > 0) {
			return 1;
		}
		if(y[j] < 0) {
			return -1;
		} 
		i++;
		j++;
	}
	return x[i]
}
