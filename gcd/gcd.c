#include <stdio.h>

int gcd(int m, int n)
{
	int tmp;
	while(tmp = m % n)
	{
		m = n;
		n = tmp;
	}
	return n;
}

int main()
{
	int a,b = 5;
	while(scanf("%d%d", &a, &b) == 2)
	{
		//putchar('-');
		printf("%d %% %d = %d\n", a, b, gcd(a,b));
	}
	return 0;
}
