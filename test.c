#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void test(char *s);

int main(void)
{
	char *s;
	s = (char *)calloc(3000000000+1, 1);
	memset(s, 'a', 1000000000);
	memset(s+1000000000, 'b', 1000000000);
	memset(s+2000000000, 'c', 1000000000);
	test(s);
	free(s);
	return (0);
}

void test(char *s)
{
//	int i;
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (i < 0)
			printf("%ld,",i);
	}
}
