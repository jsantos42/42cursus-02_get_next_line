#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	char *string;
	while (get_next_line(0, &string))
		printf("%s\n", string);
	return (0);
}
