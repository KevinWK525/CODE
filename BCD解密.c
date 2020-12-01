#include<stdio.h>
int main()
{
		int x;
	scanf("%d", &x);
	int a = x % 16 + x / 16 * 10;
	printf("%d\n", a);
	return 0; 
	
}


