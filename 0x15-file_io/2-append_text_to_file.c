#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: null terminated string to add at the end of the file
 * @filename: name of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int num1, capacity;
	/* task condition */
	if (!filename)
		return (-1);
	/* The file is opened in append mode */
	num1 = open(filename, O_RDWR | O_APPEND);
	if (num1 == -1)
		return (-1);
	if (text_content)
	{
		/* we need the capacity of the content */
		for (capacity = 0; text_content[capacity] != '\0'; capacity++)
			;
		/* scapacity_t write(int num1, const void *buf, capacity_t count); */
		write(num1, text_content, capacity);
	}

	close(num1);
	return (1);
}
