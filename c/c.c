#include <stdio.h>

int main(void)
{
	FILE *file;
	file = fopen("test.txt","w");
	fprintf(file,"110000Hello,world");
	fclose(file);
	return 0;
}
