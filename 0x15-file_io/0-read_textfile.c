#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output.
 * @letters: the number of letters it should read and print
 * @filename: pointer to the file
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t characters;
	int num1;
	char *buffer;

	if (!filename)
		return (0);
	num1 = open(filename, O_RDONLY);
	if (num1 == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	characters = read(num1, buffer, letters);
	if (characters < 0)
		return (0);
	characters = write(STDOUT_FILENO, buffer, characters);
	if (characters < 0)
		return (0);
	free(buffer);
	close(num1);
	return (characters);
}
