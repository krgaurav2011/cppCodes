#include <stdio.h>
int  n;
int  a[100];   /* The permutation */

void PrintPerm() {

	int i;
	for (i=1; i <= n; i++) printf( "%d", a[i] );
	printf("\n");
} 

void swap(int i, int j) {

	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int Next() {

	int k,j,r,s;

	k = n-1; 
	while (a[k] > a[k+1]) k--;
	if (k == 0) return(0);
	else {
		j = n;
		while (a[k] > a[j]) j--;
		swap(j,k);
		r = n; s = k+1;
		while (r>s) {
			swap(r,s);
			r--; s++;
		}
	}
	PrintPerm();
	return(1);
}

int main () {

	int i,t;
	scanf( "%d", &t );
	while(t--)
	{
	scanf( "%d", &n );

	if (n<=0) return 0; 

	printf( "\n" );
	for (i=0; i<=n; ++i) {
		a[i] = i;
	}
	PrintPerm();
	while (Next());
	printf( " " );
	}
}
