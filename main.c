#include <stdio.h>

void a(void)
{
	printf("a\r\n");
}

void b(void)
{
	printf("B\r\n");
}

int main(void)
{
	printf("Hello, World!\r\n");

	a();
	b();

	return 0;
}

