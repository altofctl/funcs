#include <stdio.h>

long int pow(long int x, int n)
{
	if(!n) return 1;
	if(n%2) return pow(x * x, n / 2) * x;
	else return pow(x * x, n / 2);
}

int main()
{
	printf("%d\n", pow(2, 6));
	return 0;
}
