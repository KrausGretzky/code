#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fprintFunc()
{
    FILE *fp;
	char str[30] = "Its a good show\n";
	
	fp = fopen("text.txt", "a+");
	if(fp == NULL)
	{
		printf("open file failed!\n");
		exit(1);
	}
    printf("ftell = %ld\n", ftell(fp));
	fseek(fp, 0, SEEK_SET);
	printf("ftell = %ld\n", ftell(fp));
	fwrite("kraus\n", sizeof(char), 6, fp);
	fprintf(fp, "%s", str);

	fclose(fp);
}