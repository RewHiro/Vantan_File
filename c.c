#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	
	int i;
	while((c = getchar()) != EOF){
		putchar(toupper(c));
	}

	return 0;
}