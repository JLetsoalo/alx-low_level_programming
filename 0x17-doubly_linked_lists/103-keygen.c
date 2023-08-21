#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwd[7], *codex;
	int leng = strlen(argv[1]), x, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (leng ^ 59) & 63;
	passwd[0] = codex[tmp];

	tmp = 0;
	for (x = 0; x < leng; x++)
		tmp += argv[1][x];
	passwd[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (x = 0; x < leng; x++)
		tmp *= argv[1][x];
	passwd[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (x = 0; x < leng; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	passwd[3] = codex[rand() & 63];

	tmp = 0;
	for (x = 0; x < leng; x++)
		tmp += (argv[1][x] * argv[1][x]);
	passwd[4] = codex[(tmp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();
	passwd[5] = codex[(tmp ^ 229) & 63];

	passwd[6] = '\0';
	printf("%s", passwd);
	return (0);
}
