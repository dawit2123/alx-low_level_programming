#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr -  a function that concatenates all the arguments of your program.
 *@ac : int
 *@av : array
 *Return: array
 */
char *argstostr(int ac, char **av)
{
	int var2, var3, var4, var5, var6 = 0, var7 = 0;
	char *var1;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (var4 = 0; (var4 < ac); var4++)
	{
		for (var5 = 0; av[var4][var5] != '\0'; var5++)
		var6++;
		var6++;
	}

	var1 = malloc(sizeof(char) * var6 + 1);
	if (var1 == NULL)
	return (NULL);
	for (var2 = 0; var2 < ac ; var2++)
	{
		for (var3 = 0; av[var2][var3] != '\0'; var3++)
		{
			var1[a] = av[var2][var3];
			var7++;
		}
		var1[var7++] = '\n';
	}
	var1[var7] = '\0';
	return (var1);
}
