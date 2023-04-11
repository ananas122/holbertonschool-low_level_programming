#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: File to be edited
 * @text_content: Is the NULL terminated string to add at the end of the file
 * Return: 1 if success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, num;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		num = write(file, text_content, strlen(text_content));
		if (num == -1)
			return (-1);
	}
	close(file);
	return (1);
}
