#include "main.h"
/**
 * create_file - creates a file
 * @text_content: null terminated string to write to the file
 * @filename: name of the file to created
 * Return: 1 in success, -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int num1, capacity;
	/* task condition */
	if (!filename)
		return (-1);
	/* rw------- permission if it exist truncate it*/
	num1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (num1 == -1)
		return (-1);

	if (text_content)
	{
		/* for write we need the capacity */
		for (capacity = 0; text_content[capacity] != '\0'; capacity++)
			;
		/*  scapacity_t write(int num1, const void *buf, capacity_t count); */
		write(num1, text_content, capacity);
	}
	close(num1);
	return (1);
}
